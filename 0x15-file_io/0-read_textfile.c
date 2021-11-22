#include "main.h"
/**
 * read_textfile - Reads a text file and prints
 * it to the POSIX standard output.
 * @filename: Is argv of the file Requiescat
 * @letters: Size of the text to print
 *
 * Return: The actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *text;
	int fh;
	ssize_t i;

	if (filename == NULL)
		return (0);

	text = malloc(letters);
	if (text == NULL)
		return (0);

	fh = open(filename, O_RDONLY);
	if (fh == -1)
	{
		free(text);
		close(fh);
		return (0);
	}

	i = read(fh, text, letters);
	if (i == -1)
	{
		free(text);
		close(fh);
		return (0);
	}

	if (write(1, text, i) == -1)
	{
		free(text);
		close(fh);
		return (0);
	}

	close(fh);
	free(text);
	return (i);
}
