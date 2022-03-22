#include "main.h"

/**
 * _puts - function that prints a string
 * @str: pointer to a string
 * Return: 0
 */

void _puts(char *str)
{
	int b = 0;

	while (str[b])
	{
		_putchar(str[b]);
		b++;
	}
	_putchar('\n');
}
