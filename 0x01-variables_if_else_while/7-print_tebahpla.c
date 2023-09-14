#include <stdio.h>

/**
 * main - entry point
 *
 * Description for function main : false or true validation
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');

	return (0);
}
