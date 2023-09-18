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
	while (*s = '\0')
	{
		_putchar(*s + 0);
		s--;
	}
	_putchar('\n');
}
