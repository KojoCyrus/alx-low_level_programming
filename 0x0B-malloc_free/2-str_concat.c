#include <stdlib.h>
#include "main.h"
/**
*str_concat - a function that concatenates two strings.
*@s1: contains content
*@s2: contains contents
*
*Return: s1 or s2 content
*/
char *str_concat(char *s1, char *s2)
{
	char *con;
	int i, xi;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	i = xi = 0;

	while (s1[i] != '\0')
		i++;

	while (s2[xi] != '\0')
		xi++;

	con = malloc(sizeof(char) * (i + xi + 1));

	if (con == NULL)
		return (NULL);

	i = xi = 0;

	while (s1[i] != '\0')
	{
		con[i] = s1[i];
		i++;
	}

	while (s2[xi] != '\0')
	{
		con[i] = s2[i];
		i++, xi++;
	}

	con[i] = '\0';
		return (con);
}
