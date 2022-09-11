#include <stdio.h>

/**
 * main - main function
 *
 * Description:  a program that prints all the numbers of base 16 in lowercase
 *
 * Return: 0
 */
int main(void)
{
	char c;
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar((num % 10) + '0');
	}

	for (c = 'a' ; c <= 'f' ; c++)
	{
		putchar(c);
	}

	putchar('\n');
	return (0);
}
