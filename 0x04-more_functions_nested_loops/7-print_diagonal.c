#include "main.h"

/**
 * print_diagonal - check if c is upper
 *
 * @n: input for alphapet
 *
 * Return: 1 if its upper, 0 if not
 */
void print_diagonal(int n)
{
	int a, b;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (a = 1; a <= n; a++)
		{
			for (b = 1; b <= a; b++)
				_putchar(' ');
			_putchar(92);
			_putchar('\n');
		}
	}
}
