#include "main.h"

/**
 * print_error - prints an error message
 * @msg: the error message to print
 */

void print_error(char *msg)
{
	fprintf(stderr, "Error: %s\n", msg);
	exit(98);
}

/**
 * print_elf_header_info - takes a pointer to an Elf64_Ehdr struct
 * called header
 * @header: pointer to ELF header struct
 */
void printf_elf_header_info(Elf64_Ehdr *header)
{
	int i;

	printf("ELF Header:\n");
	printf("  Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
	{
	printf("%02x ", header->e_ident[i]);
	}
	printf("\n");
	printf("  Class:                             %s\n",
			(header->e_ident[EI_CLASS] == ELFCLASS64) ?
			"ELF64" : "ELF32");
	printf("  Data:                              %s\n",
			(header->e_ident[EI_DATA] == ELFDATA2LSB) ?
			"2's complement, little endian" : "2's
			complement, big endian");
	printf("  Version:                           %d (%s)\n",
			header->e_ident[EI_VERSION], (header->e_ident
				[EI_VERSION] == EV_CURRENT) ?
			"current" : "invalid");
	printf("  OS/ABI:                            ");
	switch (header->e_ident[EI_OSABI]) {
	case ELFOSABI_SYSV: printf("UNIX - System V\n"); break;
	case ELFOSABI_HPUX: printf("UNIX - HP-UX\n"); break;
	case ELFOSABI_NETBSD: printf("UNIX - NetBSD\n"); break;
	case ELFOSABI_LINUX: printf("UNIX - GNU/Linux\n"); break;
	case ELFOSABI_SOLARIS: printf("UNIX - Solaris\n"); break;
	case ELFOSABI_IRIX: printf("UNIX - IRIX\n"); break;
	case ELFOSABI_FREEBSD: printf("UNIX - FreeBSD\n"); break;
	case ELFOSABI_TRU64: printf("UNIX - TRU64\n"); break;
	case ELFOSABI_ARM: printf("ARM\n"); break;
	case ELFOSABI_STANDALONE: printf("Standalone
		(embedded) application\n"); break;
        default: printf("<unknown: %d>\n", header->e_ident[EI_OSABI]);
		 break;
	}
	printf("  ABI Version:                       %d\n",
			header->e_ident[EI_ABIVERSION]);
	printf("  Type:                              ");
	switch (header->e_type) {
	case ET_NONE: printf("NONE (Unknown type)\n"); break;
	case ET_REL: printf("REL (Relocatable file)\n"); break;
	case ET_EXEC: printf("EXEC (Executable file)\n"); break;
	case ET_DYN: printf("DYN (Shared object file)\n"); break;
	case ET_CORE: printf("CORE (Core file)\n"); break;
	default: printf("<unknown: %d>\n", header->e_type); break;
	}
	printf("  Entry point address:               0x%lx\n",
			header->e_entry);
	printf("\n");
}

/**
 * main - entry point
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 Success.
 */
int main(int argc, char **argv)
{
	int fd;
	ssize_t bytes_read;

	if (argc != 2)
	{
	print_error("Usage: elf_header elf_filename");
	}
	fd = open(argv[1], O_RDONLY);
	if (fd < 0)
	{
	print_error("Failed to open file");
	}

	Elf64_Ehdr header;
	bytes_read = read(fd, &header, sizeof(header));
	if (bytes_read < 0)
	{
	print_error("Failed to read ELF header");
	}
	if (bytes_read != sizeof(header))
	{
	print_error("Incomplete ELF header");
	}
	if (memcmp(header.e_ident, ELFMAG, SELFMAG) != 0)
	{
	print_error("Not an ELF file");
	}
	print_elf_header(&header);
	if (close(fd) < 0)
	{
	print_error("Failed to close file");
	}
	return 0;
}
