#include "main.h"

/**
 * puts2 - takes a pointer to an int parameter and update its value to 98
 *
 * @str: int parameter
 *
 * return: nothing
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
