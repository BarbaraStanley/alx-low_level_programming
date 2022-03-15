#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - function that primts 10 times the alphabet in lowercase
 *
 * Return: 0
 */

void print_alphabet_x10(void)
{
	int b = 0;
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
		while (b <= 10)
		{
			_putchar('\n');
			b++;
		}
	}
	_putchar('\n');
}
