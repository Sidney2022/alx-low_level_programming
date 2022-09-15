#include "main.h"

/**
 * _islower - a function to check for lowercase characters
 *
 * @c:   the argument for the function
 *
 * Return: 0
 *
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
