#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - function that prints the alphabet in lowercase
 *
 * Return: 0
 */

void print_alphabet(void)
{
	char b = 'a';

	while (b <= 'z')
	{
		_putchar(b);
		b++;
	}
	_putchar('\n');
}
