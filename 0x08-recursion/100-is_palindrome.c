#include "main.h"

int check_pal(char *s, int i, int len);
int _strlen_recursion(char *s);

/**
*is_palindrome - checks if a srting is a palindrome
*@s: string
*
*Return: 1 if a string is a palindrome and 0 if not
*/

int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_pal(s, 0, _strlen_recursion(s)));

}

/**
*_strlen_recursion - checking the lenght of string
*@s: string
*
*Return: the lenght of string
*/


int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}


/**
*check_pal - checks for palindrome
*@s: string to check
*@i: iterator
*@len: lenght
*
*Return: 1 if a string is a palindrome and 0 if not
*/

int check_pal(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (check_pal(s, i + 1, len - 1));
}


