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

	while (b <= 9)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
		b++;
	}
}
