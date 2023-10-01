#include "main.h"

/**
 * _puts_recursion - main function that print the string
 *
 * @s: 1st parameter
 *
 * Return: void
 */


void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}
