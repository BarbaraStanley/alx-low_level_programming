#include <stdio.h>
/**
 * main - entry point, prints all possible combination of 2 two digit numbers
 *
 * Return: 0
 */

int main(void)
{
	int a, b, c, d, i, j;

	for (i = 0; i < 100; i++)
	{
		c = i / 10;
		d = i % d;

		if (a < c || (a==c && b < d))
		{
			putchar(a + '0');
			putchar(b +'0');
			putchar(32);
			putchar(c + '0');
			putchar(d + '0');

			if (!(a == 9 && b == 8))
			{
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar(10);
	return (0);
}
