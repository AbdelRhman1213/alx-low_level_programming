#include "main.h"

/**
 * _strspn - fumction that concatunate two strings
 *
 * @s: first char
 * @accept: second char
 *
 * Return: char
 */

char *_strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != ('\0'); i++)
	{
		for (j = 0; accept[j] != ('\0'); j++)
		{
			if (accept[j] == '\0')
				return (i);
		}
	}
	return (i);
}
