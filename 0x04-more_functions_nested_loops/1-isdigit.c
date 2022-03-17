#include "main.h"

/**
 * _isdigit - function that checks for a digit 0 through 9
 * @c: integer
 * Return: 1 if there is a digit. 1 otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c >= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
