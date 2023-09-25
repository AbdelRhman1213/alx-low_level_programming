#include "main.h"

/**
 * _memset - fumction that concatunate two strings
 *
 * @s: first char
 * @b: second char
 * @n: third para
 *
 * Return: char
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++, n--)
	{
		s[i] = b;
	}

	return (s);
}

