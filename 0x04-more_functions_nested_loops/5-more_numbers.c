#include "main.h"

/**
 * more_numbers - function that prints 10 times the numbers from 0 to 14
 *
 * Return: void
 */

void more_numbers(void)
{
	int n = 0;

	while (n < 10)
	{
		char b;

		for (b = 0; n <= 14; b++)
		{
			if (b >= 10)
			{
				_putchar((b / 10) + 48);
			}
			_putchar((b % 10) + 48);
		}
		n++;
		_putchar('\n');
	}
}
