#include "main.h"
/**
 * print_elf_header_info - takes a pointer to an Elf64_Ehdr struct
 * called header
 * @header: pointer to ELF header struct
 */
void printf_elf_header_info(Elf64_Ehdr *header)
{
	int i;

	printf("ELF Header:\n");
	printf("  Magic:  ");
	for (i = 0; i < EI_NIDENT; i++)
		printf("%02x ", header->e_ident[i]);
	printf("\n");
	printf ("  Class:                                    ");
	switch (header->e_ident[EI_CLASS])
	{
		case ELFCLASSNONE:
			printf("none\n");
			break;
		case ELFCLASS32:
			printf("ELF32\n");
			break;
		case ELFCLASS64:
			printf("ELF64\n");
			break;
		default:
			printf("<unknown: %x>\n", header->e_ident
					[EI_CLASS]);
	}
	printf("  Data:                                      ");
	switch (header->e_ident[EI_DATA])
	{
		case ELFDATANONE:
			printf("none\n");
			break;
		case ELFDATA2LSB:
			printf("2's complement, little endian\n");
			break;
		case ELFDATA2MSB:
			printf("2's complement, big endian\n");
			break;
		default:
			printf("<unknown: %x\n", header->e_ident
					[EI_DATA]);
	}
	printf("  Version:                                    %d\n",
			header->e_ident[EI_VERSION]);
	printf("  OS/ABI:                                     ");
