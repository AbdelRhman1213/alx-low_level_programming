#include <stdio.h>
#include <stdlib>
#include <time.h>

/**
 * main - lkdsfkldjsifsdf
 *
 * return: zero
 */

int main(void)
{
	int s;
	char c;

	srand(time(NULL));
	while (s <= 2645)
	{
		c = rand() % 120;
		sum += c;
		putchar(c);
	}
	putchar(2772 - s);
	return (0);
}
