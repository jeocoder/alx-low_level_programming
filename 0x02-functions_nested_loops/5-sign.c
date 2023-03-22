#include "main.h"

/**
 * print_sign - a function that prints the sign of a number
 *
 * @n: parameter to be printed
 *
 * Return: return 1 and 0 when n > 0 & n == 0 and otherwise -1
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		_putchar(',');
		_putchar(' ');
		return (1);
	}

	else if (n == 0)
	{
		_putchar('0');
		_putchar(',');
		_putchar('0');
		return (0);
	}

	else
	{
		_putchar('-');
		_putchar(',');
		_putchar(' ');
		return (-1);
	}

}


