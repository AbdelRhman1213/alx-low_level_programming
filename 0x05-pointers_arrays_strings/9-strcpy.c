#include "main.h"

/**
 * *_strcpy - takes a pointer to an int parameter and update its value to 98
 *
 * @dest: int parameter
 * @src: int parameter
 *
 * Return: array of dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');

	return (dest);
}
