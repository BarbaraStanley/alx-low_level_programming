#include <stdio.h>
/**
 * main - Entry point, print the alphabet in lower case
 *
 * Return: always 0
 */
int main(void)
{
	char i = 'a';

	while (i <= 'z')
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
