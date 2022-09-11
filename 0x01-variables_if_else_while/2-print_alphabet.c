#include <stdio.h>

/**
 * main - main function
 *
 * Description: code to prints the alphabet in lowecase
 *
 * Return: 0
 */
int main(void)
{
	char c;

	for (c = 'a' ; c <= 'z' ; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
