#include "main.h"

/**
 * _puts - print array string
 *
 * @str: array of string
 *
 * Return: nothing
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str + 0);
		str++;
	}
	_putchar('\n');
}
