#include <stdio.h>

/**
 * main - main function
 *
 * Description: a program that prints all the numbers of base 16 in lowercase
 *
 * Return: 0
 */

int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
