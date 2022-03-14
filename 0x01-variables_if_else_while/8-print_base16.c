#include <stdio.h>
/**
 * main - Entry point, program to print all the numbers of base 16 in lowercase
 *
 * Return: 0
 */

int main(void)
{
	char b;
	int c;

	for (c = 0; c < 10; c++)
	{
		putchar(c + '0');
	}
	for (b = 'a'; b < 'g'; b++)
	{
		putchar(b);
	}
	putchar('\n');
	return (0);
}
