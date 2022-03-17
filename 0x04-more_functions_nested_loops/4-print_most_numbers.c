#include "main.h"

/**
 * print_most_numbers - function that prints 0 to 9 without 2 and 4
 *
 * Return: void
 */

void print_most_numbers(void)
{
	char i = 48;

	while (i <= 57)
	{
		if (i != 50 && i != 52)
		{
			_putchar(i);
		}
		i++;
	}
	_putchar('\n');
}
