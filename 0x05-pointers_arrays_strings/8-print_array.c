#include "main.h"

/**
 * print_array - function that prints n elements of an array of integer
 * @a: function parameter 1
 * @n: function parameter 2
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
	{
		if (i != n - 1)
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
	}
	printf("\n");
}
