#include "main.h"

/**
 * _strcmp - fumction that concatunate two strings
 *
 * @s1: first char
 * @s2: second char
 *
 * Return: char
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (*s1)
	{
		if (*s1 !=  *s2)
		{
			i = ((int)*s - 48) - ((int)*s - 48);
			break;
		}
		s1++;
		s2++;
	}
	return (i);
}
