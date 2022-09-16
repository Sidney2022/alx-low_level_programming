#include "main.h"
#include <ctype.h>

/**
 * _isupper - a function that checks for uppercase character.
 *
 * @c - character to be checked
 *
 * Return: 1 if character is uppercase or 0
 */

int _isupper(char c)
{
	if (isupper(c))
	{
		return (1);
	}
	return (0);
}
