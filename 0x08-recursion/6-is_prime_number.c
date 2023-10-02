#include "main.h"

/**
 * is_prime_number - main function that print the string
 *
 * @n: 1st parameter
 *
 * Return: void
 */

int is_prime_number(int n)
{
	if (n < 2)
		return (0);

	for (int i = 2; i * i <= n; i++)
	{
		if (n % i == 0)
			return (0);
	}
	return (1);
}
