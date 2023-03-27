#include "main.h"

/**
 * swap_int - a function that swaps the values of two integers
 *
 * @a: integer #1 to swap
 * @b: integer #2 to swap
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
