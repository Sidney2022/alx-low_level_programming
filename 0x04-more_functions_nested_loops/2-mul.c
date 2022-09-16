#include "main.h"

/**
 * mul - a function that multiplies two integers
 *
 * @a: first integer parameter
 *
 * @b: second integer parameter
 *
 * Return: result of operation
 */

int mul(int a, int b)
{
	if (sizeof(a) == sizeof(int) && sizeof(b) == sizeof(int))
	{
		int result;

		result = a * b;

		return (result);
	}
}
