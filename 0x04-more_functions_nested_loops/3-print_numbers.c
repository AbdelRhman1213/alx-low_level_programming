#include "main.h"

/**
 * print_numbers - check number between 0 and 9 and print it
 *
 *
 *
 * Return: the resulte
 */
void print_numbers(void)
{
	int a = 0;

	do {
		_putchar(a + 48);
		a++;
	} while (a >= 0 && a <= 9);
	_putchar('\n');
}

