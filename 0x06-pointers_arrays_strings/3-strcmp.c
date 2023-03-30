#include "main.h"

/**
 * _strcmp - Write a function that compares two strings
 * @s1: input string 1
 * @s2: input string 2
 * Return: always 0
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0 ; s1[i] != '\0' || s2[i] != '\0' ; i++)
	{
		if (s1[i] != s2[i])
		{
			if (s1[i] < s2[i])
				return (s1[i] - s2[i]);
			else if (s1[i] > s2[i])
				return (s1[i] - s2[i]);
		}
		else
			return (0);
	}
	return (0);
}
