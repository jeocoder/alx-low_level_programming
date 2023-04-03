#include "main.h"

/**
 * _memset - function that fills memory with a constant byt
 * @s: memory to be filled
 * @b: the desired value
 * @n: number of bytes to be changed
 * Return: changed array with new value for n bytes
 */

char *_memset(char *s, char b, unsigned int n)
{
	int t = 0;

	for (t = 0 ; n > 0 ; t++)
	{
		s[t] = b;
		n--;
	}
	return (s);
}
