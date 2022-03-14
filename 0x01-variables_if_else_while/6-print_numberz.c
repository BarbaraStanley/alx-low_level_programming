#include <stdio.h>
/**
 * main - Entry point, print all single digit numbers of base 10 using putchar
 *
 * Return: always 0
 */
int main(void)
{
	int i = 48;

	while (i < 57)
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
