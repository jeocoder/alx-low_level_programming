#include "main.h"
#include <string.h>
/**
 * _strspn - function that gets the length of a prefix substring
 * @s: input 1
 * @accept: input 2
 * Return: 0 upon success
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int length = 0;
	char *p;

	for (p = s; *p; p++)
	{
		if (strchr(accept, *p) == NULL)
		{
			break;
		}
		length++;
	}
	return (length);
}
