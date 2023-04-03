include "main.h"

/**
*_memset - fills the first n bytes of the memory area pointed to by s with the constant byte b
*@s is a memory area
*@b is a value
*@n is the number of bytes
*
*Return: This should return the changed array with new value for n
*/

char *_memset(char *s, char b, unsigned int n);
{
	int i=0;
	for(; n>0; i++){
	s[i]=b;
	n--;
	}
	return s;
}
