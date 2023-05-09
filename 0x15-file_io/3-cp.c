#include "main.h"

/**
 * main - Entry point
 * @argc: argument count
 * @argv: array of arguments
 * Return: 0 on success, non-zero on failure
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to, bytes_read, bytes_written, close_from, close_to;
	char buffer[BUFSIZE];

	if (argc != 3)
	{ dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97); }
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{ dprintf(STDERR_FILENO, "Error: Can't read from file %s\n"
				, argv[1]);
		exit(98); }
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{ dprintf(STDERR_FILENO, "Error: can't write to %s\n"
				, argv[2]);
		exit(99); }
	while ((bytes_read = read(fd_from, buffer, BUFSIZE)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written != bytes_read)
		{ dprintf(STDERR_FILENO, "Error: Can't write to %s\n",
					argv[2]);
			exit(99);
			break; }
	}
	if (bytes_read == -1)
	{ dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
			argv[1]);
		exit(98); }
	close_from = close(fd_from);
	close_to = close(fd_to);
	if (close_from == -1 || close_to == -1)
	{ dprintf(STDERR_FILENO, "Error: Can't close fd %d\n",
			(close_from == -1 ? fd_from : fd_to));
		exit(100); }
	return (0);
}
