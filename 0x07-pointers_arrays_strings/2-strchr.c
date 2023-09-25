#include "main.h"

/**
 * _strchr - fumction that concatunate two strings
 *
 * @s: first char
 * @c: second char
 *
 * Return: char
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= 0; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return ('\0');
}
