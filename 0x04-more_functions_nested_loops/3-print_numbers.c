#include "main.h"

/**
 * print_numbers - function that prints the numbers o to 9
 *
 * Return: void
 */

void print_numbers(void)
{
	char b = 48;

	while (b <= 57)
	{
		_putchar(b);
		b++;
	}
	_putchar('\n');
}
