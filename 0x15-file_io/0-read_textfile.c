#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the
 * POSIX standard output
 * @filename: the name of the file
 * @letters:  the number of letters it should read and print
 * Return: he actual number of letters it could read and print.
 * 0 if fails
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file_descriptor, n, m;
	char *buffer;

	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	n = read(file_descriptor, buffer, letters);
	m = write(STDOUT_FILENO, buffer, n);

	free(buffer);
	close(file_descriptor);
	return (m);
}
