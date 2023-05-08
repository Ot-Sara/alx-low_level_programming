#include "main.h"

/**
 * create_file - creates a file
 * @filename: the name of the file to create
 * @text_content: a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int file_descriptor;
	int bytes_written;
	size_t text_length = 0;
	mode_t file_permissions = S_IRUSR | S_IWUSR;

	if (filename == NULL)
	{
		return (-1); }
	if (text_content == NULL)
	{
		text_content = ""; }
	while (*(text_content + text_length) != '\0')
	{
		text_length++; }
	file_descriptor = open(filename, O_WRONLY | O_CREAT | O_TRUNC,
			file_permissions);
	if (file_descriptor == -1)
		return (-1);
	bytes_written = write(file_descriptor, text_content, text_length);
	if (bytes_written == -1 || (size_t)bytes_written != text_length)
	{
		close(file_descriptor);
		return (-1);
	}
	close(file_descriptor);
	return (1);
}
