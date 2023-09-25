#include "main.h"

/**
 * _memcpy - fumction that concatunate two strings
 *
 * @n: first char
 * @dest: second char
 * @src: third para
 *
 * Return: char
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
