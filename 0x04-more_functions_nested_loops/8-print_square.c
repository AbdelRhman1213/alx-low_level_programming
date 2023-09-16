#include "main.h"

/**
 * print_square - check if c is upper
 *
 * @size: input for alphapet
 *
 * Return: 1 if its upper, 0 if not
 */
void print_square(int size)
{
	int row, col;

	for (row = 1; row <= size; row++)
	{
		for (col = 1; col <= size; col++)
			_putchar('#');
		_putchar('\n');
	}
}
