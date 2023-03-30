#include "main.h"

/**
 * _strncat - a function that concatenates two strings
 * @dest: destination
 * @src: source
 * @n: number of characters to append
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, c;

	for (i = 0; dest[i] != '\0'; i++)
		;

	for (i = 0; dest[i] != '\0'; i++)
		dest[i] = src[c];
	}
	return (dest);
}
