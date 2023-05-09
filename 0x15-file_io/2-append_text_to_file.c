#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

/**
*append_text_to_file - a function that appends text at the end of a file.
*@filename: is a pointer to the name o the file
*@text_content: the sting we're adding to the file
*
*Return: should return 1 upon success, else -1
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int a;
	int w;
	int len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}
	a = open(filename, O_WRONLY | O_APPEND);
	w = write(a, text_content, len);

	if (a == -1 || w == -1)
		return (-1);
	close(a);

	return (1);
}
