#include <stdio.h>
/**
 * main - main is the main function
 * Return: 0 always when successful
**/
int main(void)
{

	printf("size of a char: %1ld bytes \n", sizeof(char));
	printf("size of a int: %4ld bytes \n", sizeof(int));
	printf("size of a long int: %4ld bytes \n", sizeof(long int));
	printf("size of a long long init: %8ld bytes \n", sizeof(long long int));
	printf("size of a float: %4ld bytes \n", sizeof(float));
	return (0);
}