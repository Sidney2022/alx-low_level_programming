#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main -main function
 *
 * Description: code to generate a random number and check if its +ve or -ve
 *
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
		printf("%i is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%i is negative\n", n);
	}
	else
	{
		printf("%i is 0\n", n);
	}
	return (0);
}
