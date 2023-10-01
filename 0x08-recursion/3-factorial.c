#include "main.h"

/**
 * factorial - main function that print the string
 *
 * @n: 1st parameter
 *
 * Return: intger
 */

int factorial(int n)
{
	if (n >= 0)
	{
		return (n * factorial(n - 1));
	}
	else if (n < 0)
	{
		return (-1);
	}
	else if (n = 0)
	{
		return (1);
	}
}
