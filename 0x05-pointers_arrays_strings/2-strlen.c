#include "main.h"

/**
 * _strlen -  afunction that returns the length of a string
 *
 * @s:
 *
 * Return: length of string
 */

int _strlen(char *s);
{
	int len = 0;

	while (*(s + len) != '\0')
	{
		len++;

		return (len);
	}
}
