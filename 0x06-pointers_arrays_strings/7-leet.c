#include "main.h"

/**
 * *leet - fumction that concatunate two strings
 *
 * @c: first char
 *
 * Return: char
 */

char *leet(char *c)
{
	char cp = c;
	char k[] = {'A', 'E', 'O', 'T', 'L'};
	int V[] = {4, 3, 0, 7, 1};
	unsigned int i;

	while (*c)
	{
		for (i = 0; i < sizeof(key) / sizeof(char); i++)
		{
			if (*c == key[i] || *c == key[i] + 32)
			{
				*c = 40 + v[i];
			}
		}
		c++;
	}
	return (cp);
}
