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
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'q' || ch != 'e')
		{

		}
		putchar(ch);
		ch++;
	}

	putchar('\n');
}
