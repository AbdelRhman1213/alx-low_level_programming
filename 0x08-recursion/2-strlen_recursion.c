#include "main.h"

/**
 * _strlen_recursion - main function that print the string
 *
 * @s: 1st parameter
 *
 * Return: void
 */

int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s > '\0')
	{
		l += _strlen_recursion(s + 1) + 1;
	}
	return (l);
}
