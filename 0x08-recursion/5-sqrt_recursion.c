#include "main.h"

/**
 * _sqrt_recursion - main function that print the string
 *
 * @n: 1st parameter
 *
 * Return: intger
 */
int square(int n, int val);
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}

/**
 * square - main function that print the string
 *
 * @n: 1st parameter
 * @val: 2nd parameter
 *
 * Return: intger
 */
int square(int n, int val)
{
	if (val * val == n)
		return (val);
	else if (val * val < n)
		return (square(n, val + 1));
	else
		return (-1);
}
