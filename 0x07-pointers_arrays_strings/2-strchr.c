#include "main.h"
/**
 * _strchr - a function that locates a character in a string
 * @s: input 1
 * @c: input 2
 * Return: 0 upon success
 */
char *_strchr(char *s, char c)
{
	int x = 0;

	for (x = 0 ; s[x] >= '\0'; x++)
	{
		if (s[x] == c)
			return (&s[x]);
	}
	return (0);
}
