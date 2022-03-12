#include <stdio.h>
/**
 * main - Entry point, print the alphabet in lower case
 *
 * Return: always 0
 */
int main(void)
{
	char i = 'a';
	char c;

	while (i <= 'z')
	{
		putchar(i);
		i++;
	}

	c = 'A';
	while (c <= 'Z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
