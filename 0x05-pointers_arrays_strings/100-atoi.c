#include "main.h"

/**
 * _atoi - ter and update its value chek the sign of num
 *
 * @s: int parameter
 *
 * Return: int value
 */

int _atoi(char *s)
{
	unsigned int n = 0;
	int sign = 1;

	do {
		if (*s == '-')
			sign *= -1;
		else if (*s >= '0' && *s <= '9')
			n = (n * 10) + (*s - '0');
		else if (n > 0)
			break;
	} while (*s++);

	return (n * sign);
}
