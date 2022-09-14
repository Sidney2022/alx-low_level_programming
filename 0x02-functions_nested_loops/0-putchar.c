#include <unistd.h>
#include "main.h"

/**
 * main- entry point
 *
 * _putchar - writes the character c to stdout
 *
 * Descvription: function to print '_putchar'
 * using _putchar
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int main(void)
{
	char ch[8] = "_putchar";
	int i = 0;
	char c;

	while (i <= 8)
	{
		c = ch[i];
		_putchar(c);
		i++;
	}
	_putchar('\n');
	return (0);
}
