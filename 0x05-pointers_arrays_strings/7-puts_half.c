#include "main.h"

/**
 * puts_half - function that prints half of a string
 *
 * @str: function string
 *
 * Return: void
 */

void puts_half(char *str)
{
	int i;
	int length = 0;

	for (i = 0 ; str[i] != '\0' ; i++)
		length++;
	if (length % 2 == 0)
	{
		for (i = length / 2 ; str[i] != '\0' ; i++)
			_putchar(str[i]);
		_putchar('\n');
	}
	else if (length % 2 != 0)
	{
		for (i = (length - 1) / 2 ; str[i] != '\0' ; i++)
			_putchar(str[i]);
		_putchar('\n');
	}
}