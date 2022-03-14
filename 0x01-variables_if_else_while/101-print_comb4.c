#include <stdio.h>
/**
 * main - entry point, prints all possible combinations of three digits
 *
 * Return: 0
 */

int main(void)
{
	int e, f, g, h;

	for (e = 0; e < 1000; e++)
	{
		f = e / 100;
		g = (e / 10) % 10;
		h = e % 10;

		if (f < g && g < h)
		{
			putchar(f + '0');
			putchar(g + '0');
			putchar(h + '0');

			if (e < 700)
			{
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar('\n');
	return (0);
}
