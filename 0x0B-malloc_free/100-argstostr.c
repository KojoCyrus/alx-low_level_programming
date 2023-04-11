#include <stdlib.h>
#include "main.h"

/**
*argstostr -  a function that concatenates all the arguments
*@av: NULL
*@ac: 0
*
*Return: 0 (success)
*/

char *argstostr(int ac, char **av)
{
	int i, x, y = 0, l = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{

		for (x = 0; av[i][x]; x++)
			l++;
	}

		l += ac;

		str = malloc(sizeof(char) * l + 1);

		if (str == NULL)
			return (NULL);

		for (i = 0; i < ac; i++)

	{

			for (x = 0; av[i][x]; x++)
			{
				str[y] = av[i][x];
				y++;
			}

		if (str[y] == '\0')
		{
			str[y++] = '\n';
		}
	}

	return (str);
}
