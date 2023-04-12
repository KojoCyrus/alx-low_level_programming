#include <stdlib.h>
#include "main.h"
/**
*_countword - to count the number of words in the string
*@str1: string
*Return: 0
*/
int _countword(char *str1)
{
	int flag, a, b;

	flag = 0;
	b = 0;

	for (a = 0; str1[a] != '\0'; a++)
	{
		if (str1[a] == ' ')
			flag = 0;

		else if (flag == 0)
		{
			flag = 1;
			b++;
		}
	}
	return (b);
}

/**
* **strtow - a function that splits a string into words
*@str: string to split
*
* Return: it should point to an array of strings (Success)
*/
char **strtow(char *str)
{
	char **matrix, *tmp;
	int i, x = 0, len = 0, words, a = 0, start, end;

	while (*(str + len))
		len++;

	words = _countword(str);
	if (words == 0)
		return (NULL);

	matrix = (char **) malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (a)
			{
				end = i;
				tmp = (char *) malloc(sizeof(char) * (a + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				matrix[x] = tmp - a;
				x++;
				a = 0;
			}
		}
		else if (a++ == 0)
			start = i;
	}
	matrix[x] = NULL;

	return (matrix);
}

