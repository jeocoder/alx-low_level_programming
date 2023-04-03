#include "main.h"
#include <stdio.h>
/**
 * _strpbrk - main function
 * @s: input 1
 * @accept: input 2
 * Return: always 0
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		const char *accept_ptr = accept;

		while (*ptr != '\0')
		{
			if (*s == *ptr)
			{
				return (s);
			}
			ptr++;
		}
		s++;
	}
	return (0);
}
