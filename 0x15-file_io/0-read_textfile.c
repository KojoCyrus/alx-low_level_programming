#include "main.h"
#include <stdlib.h>

/**
 *read_textfile -  a function that reads a text file
 *and prints it to the POSIX standard output.
 *@filename: the text file
 *@letters: number of letters
 *
 *Return: w, which is the number of bytesZZ
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file;
	ssize_t lt;
	ssize_t w;
	char *text;

	text = malloc(letters);
	if (text == NULL)
		return (0);

	if (filename == NULL)
		return (0);

	file = open(filename, O_RDONLY);

	if (file == -1)
	{
		free(text);
		return (0);
	}

	lt = read(file, text, letters);

	w = write(STDOUT_FILENO, text, lt);

	close(file);

	return (w);
}
