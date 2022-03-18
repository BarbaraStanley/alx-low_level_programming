#include "main.h"

/**
 * print_diagonal - function that draws a diagonal on the terminal
 * @n: number of \ to be printed
 * Return: void
 */

void print_diagonal(int n)
{
	int i = 0, c;

	while (i < n && n > 0)
	{
		c = 0;
		while (c < i)
		{
			_putchar(' ');
			c++;
		}

		_putchar('\\');
		_putchar('\n');
		i++;
	}
	if (i == 0)
		_putchar('\n');
}
