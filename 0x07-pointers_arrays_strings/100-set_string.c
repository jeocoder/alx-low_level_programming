#include "main.h"
#include <stdio.h>

/**
 * set_string -  a function that sets the value of a pointer to a char
 * @s: input 1
 * @to: input 2
 * Return: always 0
 */
void set_string(char **s, char *to)
{
	*s = to;
}