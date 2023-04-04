#include "main.h"
/**
 * _memcpy - a function that copies memory area
 * @dest: destination memory
 * @src: source memory
 * *@n: bytes
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *ptr = dest;

	while (n--)
	{
		*dest++ = *src++;
	}
	return (ptr);
}
