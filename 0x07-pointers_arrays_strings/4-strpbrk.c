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
		char *a = accept;

		while (*a != '\0')
		{
			if (*s == *a)
			{
				return (s);
			}
			a++;
		}
		s++;
	}
	return (0);
}
