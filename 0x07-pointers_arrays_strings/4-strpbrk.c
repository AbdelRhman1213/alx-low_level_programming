#include "main.h"

/**
 * _strpbrk - fumction that concatunate two strings
 *
 * @accept: second char
 * @s: third para
 *
 * Return: char
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char *p;

	i = 0;

	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (accept[j] == s[i])
			{
				p = &s[i];
				return (p);
			}
			j++;
		}
		i++;
	}
	return (0);
}
