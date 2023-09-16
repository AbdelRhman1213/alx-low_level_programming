#include "main.h"

/**
 * more_numbers -print from 1 to 14 (10) times
 *
 *
 *
 * Return: 1 if its upper, 0 if not
 */
void more_numbers(void)
{
	int i, a, j;

	for (i = 0; i < 10; i++)
	{
		for (a = 0; a <= 14; a++)
		{
			j = a;

			if (j > 9)
			{
				_putchar(1 + 48);
				j = a % 10;
			}
			_putchar(a + 48);
		}
		_putchar('\n');
	}
}

