#include "main.h"

/**
 * _abs - a function that computes the absolute value of an integer
 *
 * @a: the parameter to be printed
 *
 * Return: always return a
 *
 */

int _abs(int a)
{
	if (a < 0)
		a = -(a);
	else if (a >= 0)
		a = a;
	return (a);
}
