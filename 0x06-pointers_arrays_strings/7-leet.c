#include "main.h"

/**
 * _strcat - fumction that concatunate two strings
 *
 * @dest: first char
 * @src: second char
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
		for (i = 0; i <sizeof(key)/ sizeof(char); i++)
		{
			if(*c == key[i] || *c == key[i] + 32)
			{
				*c = 48 + v[i];
			}
		}
		c++;
	}
	return (cp);
}
