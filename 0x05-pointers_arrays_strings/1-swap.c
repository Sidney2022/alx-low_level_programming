#include "main.h"

/**
 * swap_int -  a function that swaps the values of two integers
 *
 * @a: input parameter 1
 * @b: input parameter 2
 *
 * a and b - variables whose values are to be swapped
 *
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
