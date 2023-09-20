#include "main.h"

/**
 * _strncat - fumction that concatunate two strings
 *
 * @dest: first char
 * @src: second char
 * @n: integer var
 *
 * Return: char
 */

char *_strncat(char *dest, char *src, int n)
{
	int c, i;

	c = 0;
	
	while (dest[c])
		c++;

	for (i = 0;i < n && src [i] != 0; i++)
		dest[c + i] = src[i];

	dest [c + i] = '\0';

	return (dest);
}
