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
	int file_descriptor;
	size_t bytes_read = 0, bytes_written = 0, bytes_to_read, n, m;
	char buffer[1024];

	if (filename == NULL)
		return (0);

	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor == -1) {
		perror("open");
		return (0); }

	while (bytes_read < letters)
	{
		bytes_to_read = letters - bytes_read;
		if (bytes_to_read > sizeof(buffer))
			bytes_to_read = sizeof(buffer);
		n = read(file_descriptor, buffer, bytes_to_read);
		if (n <= 0)
			break;
		m = write(STDOUT_FILENO, buffer, n);
		if (m != n)
			return (0);
		bytes_read += n;
		bytes_written += m; }
	if (close(file_descriptor) == -1)
		return (0);
	return (bytes_written); }
