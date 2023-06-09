#include "main.h"

/**
 * append_text_to_file - this Appends text at the end of a file.
 * @filename: Pointer to the name of the file.
 * @text_content: This is the string to add to the end of the file.
 *
 * Return: 1 on success, -1 otherwise.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, wr, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len])
			len++;
	}

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	wr = write(fd, text_content, len);
	if (wr == -1)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}

