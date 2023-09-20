#include "main.h"

/**
 * _strncpy - fumction that concatunate two strings
 *
 * @dest: first char
 * @src: second char
 * @n: inter var
 * Return: char
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	while (i < n)
	{
		dest[i] != '\0';
		i++;
	}

	return (dest);
}
