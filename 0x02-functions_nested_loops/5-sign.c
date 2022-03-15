#include <stdio.h>
#include "main.h"
/**
 * print_sign - function that prints the sign of a number
 * @n: integer recieved
 * Return: 1 if n is not 0, amd 0 otherwise
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
