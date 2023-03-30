#include "main.h"
/**
 * _strncpy - a function that copies a string
 * @dest: destinaion
 * @src: source
 * @n: number of characters
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
		dest[i] = src[i];
	return (dest);
}
