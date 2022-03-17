#include "main.h"

/**
 * _isupper - Function that checks for uppercase character
 * @c: integer
 * Return: 0
 */

int _isupper(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
