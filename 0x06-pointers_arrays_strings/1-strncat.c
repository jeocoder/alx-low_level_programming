#include "main.h"
#include <string.h>

/**
 * _strncat - a function that concatenates two strings
 * @dest: destination
 * @src: source
 * @n: number of characters to append
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
