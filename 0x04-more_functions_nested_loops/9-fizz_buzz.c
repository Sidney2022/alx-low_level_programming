#include <stdio.h>

/**
 * main - function to print output of fizzbuzz challenge
 *
 * Return: fizz -if number is a multiple of 3
 * - buzz -if number is a multiple of 5
 * - fizzbuzz -if number is a multiple of 15
 */

int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if (n % 3 == 0 && n % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (n % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (n % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", n);
		}
	}
	printf("\n");
	return (0);
}
