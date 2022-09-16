#include "main.h"

/**
 * more_numbers -  a function that prints 10 times the numbers, from 0 to 14
 *
 * Return: the numbers 0-14 printed 10 times
 */


void more_numbers(void)
{
	int count;
	int n;

	for (count = 0; count <= 10; count++)
	{
		for (n = 0; n < 15; n++)
		{
			if (n >= 10)
			{
				_putchar(j / 10 + '0');
			}
			else
				_putchar(j % 10 + '0');
		}
		_putchar('\n');
	}
}
