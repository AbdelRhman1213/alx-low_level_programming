#include "main.h"

/**
 * print_rev - print array string
 *
 * @s: array of string
 *
 * Return: nothing
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;

	while (i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
