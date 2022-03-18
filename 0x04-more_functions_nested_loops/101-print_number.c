#include "main.h"

/**
 * print_number - function that prints an integer
 * @n: integer
 * Return: void
 */

void print_number(int n)
{
	unsigned int b;

	b = n;

	if (n < 0)
	{
		_putchar(45);
		b = -n;
	}
	if (b / 10)
	{
		print_number(b / 10);
	}
	_putchar((b % 10) + '0');
}

