#include <stdio.h>
/**
 * main - entry point, prints all possible combinations of two digit numbers
 *
 * Return: 0
 */
int main(void)
{
	int b, c, d;
	b = 0;
	while (b < 10)
	{
		c = b % 10;
		d = b / 10;

		if (d < c)
		{
			putchar(d + '0');
			putchar(c + '0');

			if (b < 89)
			{
				putchar(44);
				putchar(32);
			}
		}
		b++;
	}
	putchar('\n');
		return (0);
}
