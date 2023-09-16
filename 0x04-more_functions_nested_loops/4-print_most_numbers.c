#include "main.h"

/**
 * print_most_numbers - print 0 - 9 but 2 - 4 no.
 *
 *
 *
 * Return: 1 if its upper, 0 if not
 */
void print_most_numbers(void)
{
	int a = 0;

	do {

		if (a != 2 && a != 4)
		_putchar(a + 48);
		a++;
	} while (a >= 0 && a <= 9);
	_putchar('\n');
}
