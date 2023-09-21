#include "main.h"
#include <stdio.h>


/**
 * isLower - fumction that concatunate two strings
 *
 * @c: sec char
 * Return: char
 */

int isLower(char c)
{
	return (c >= 97 && c <= 122);
}
/**
 * isDelimiter - kfhgvkcvjlc
 *
 * @c: third char
 * Return: char
 */
int isDelimiter(char c)
{
	int i;
	char d[] = " \t\n,.!?\"(){}";

	for (i = 0; i < 12; i++)
		if (c == d[i])
			return (1);

	return (0);
}

/**
 * *cap_string - gcjkhnvbgvuguj kljm
 *
 * @s: first char
 *
 * Return: char
 */
char *cap_string(char *s)
{
	char *ptr = s;
	int f = 1;

	while (*s)
	{
		if (isDelimiter(*s))
			f = 1;
		else if (isLower(*s) && f)
		{
			*s -= 32;
			f = 0;
		}
		else
		{
			f = 0;
		}
		s++;
	}
	return (ptr);
}
