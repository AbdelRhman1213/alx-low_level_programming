#include "main.h"

/**
 * print_line - check if c is upper
 *
 *@n: nuber of tiomes
 * Return: 1 if its upper, 0 if not
 */
void print_line(int n)
{
	int a;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (a = 1; a <= n; a++)
			_putchar('_');
		_putchar('\n');
	}
}
