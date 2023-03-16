#include <stdio.h>
/**
 * main - main is the main function
 * Return: 0 always when successful
**/
int main(void)
{

	printf("Size of char: %ld bytes\n", sizeof(char));
	printf("Size of int: %ld bytes\n", sizeof(int));
	printf("Size of long int: %ld bytes\n", sizeof(long int));
	printf("Size of long long int: %ld bytes\n", sizeof(long long int));
	printf("Size of float: %ld bytes\n", sizeof(float));
	return (0);
}
