#include "main.h"
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * read_textfile - Read text file and print to STDOUT.
 * @filename: Name of the text file to read.
 * @letters: Number of letters to be read.
 *
 * Return: Number of bytes read and printed on success, 0 on failure.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fdr;
	char *buff;
	ssize_t w, r;

	fdr = open(filename, O_RDONLY);
	if (fdr == -1)
		return (0);

	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
	{
		close(fdr);
		return (0);
	}

	r = read(fdr, buff, letters);
	w = write(STDOUT_FILENO, buff, r);

	free(buff);
	close(fdr);

	return (w);
}

