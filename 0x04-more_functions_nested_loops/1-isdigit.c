#include "main.h"

/**
 * _isdigit - function to check is an input is a digit
 *
 * @c: input to be checked
 *
 * Return: 1 - if input is digit or 0
 */

int _isdigit(int c)
{
	if (isdigit(c))
	{
		_putchar();
		return (1);
	}
	return (0);
}
