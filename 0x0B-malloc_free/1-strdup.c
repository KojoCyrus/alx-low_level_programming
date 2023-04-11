#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
*_strdup - a function that returns a pointer to
*newly allocated space in memory
*@str: character
*
*Return: NULL
*/

char *_strdup(char *str)
{
	char *xx;

	int i, a = 0;

	if (str == NULL)
		return (NULL);

	i = 0;

	while (str[i] != '\0')
		i++;

	xx = malloc(sizeof(char) * (i + 1));

	if (xx == NULL)
		return (NULL);

	for (a = 0; str[a]; a++)

		xx[a] = str[a];

	return (xx);

}
