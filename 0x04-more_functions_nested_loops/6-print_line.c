#include "main.h"

/**
 * print_line - function that draws a straight line in the terminal
 * @n: variable integer
 * Return: void
 */

void print_line(int n)
{
	int a = 0;

	while (a < n && n > 0)
	{
		_putchar('_');
		a++;
	}
	_putchar('\n');
}
