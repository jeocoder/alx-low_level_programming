#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* main - main will assign a random number to the variable n */
/* Return: 0 upon success */

int main(void);
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
		printf("%d is positive", n);
	else if (n == 0)
		printf("%d is zero", n);
	else if (n < 0)
		printf("%d is negative", n);
	printf("\n");
	return (0);
}
