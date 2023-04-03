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
	int s = 0;
	int t = n;

	for (s = 0 ; s < t ; s++)
	{
		dest[s] = src[s];
		t--;
	}
	return (dest);
}
