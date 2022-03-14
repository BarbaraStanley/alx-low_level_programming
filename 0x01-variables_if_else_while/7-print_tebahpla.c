#include <stdio.h>
/**
 * main - Entry point, print the lowercase alphabet in reverse
 *
 * Return: always 0
 */
int main(void)
{
	char i = 'z';

	while (i > '\'')
	{
		putchar(i);
		i--;
	}
	putchar('\n');
	return (0);
}

