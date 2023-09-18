#include "main.h"

/**
 * swap_int - swap values between a,b
 *
 * @a: int parameter
 * @b: int parameter
 *
 * return: nothing
 */

void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
