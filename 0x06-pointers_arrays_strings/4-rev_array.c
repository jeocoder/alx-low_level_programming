#include "main.h"

/**
 * reverse_array - a function that reverses the content
 * @a: array
 * @n: number of array elements
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int tmp, index;

	for (index = n - 1; index > n  / 2; index--)
	{
		tmp = a[n - 1 - index];
		a[n - 1 - index] = a[index];
		a[index] = tmp;
	}
}
