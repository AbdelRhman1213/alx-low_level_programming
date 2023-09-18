#include "main.h"

/**
 * puts_half - takes a pointer to an int parameter and update its value to 98
 *
 * @str: int parameter
 *
 * return: nothing
 */

void puts_half(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;
	i++;

	for (i /= 2; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
