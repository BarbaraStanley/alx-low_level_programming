#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 * Program that prints _putchar
 * Return: 0
 */

int main(void)
{
	char b[9] = "_putchar";

	int i = 0;

	while (i < 8)
	{
		_putchar(b[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
