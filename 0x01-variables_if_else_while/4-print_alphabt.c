#include <stdio.h>
/**
 * main - Entry point, print the alphabet in lower case except '\q' and 'e\'
 *
 * Return: always 0
 */
int main(void)
{
	char i = 'a';

	while (i <= 'z')
        {
		if (i != 'q'&& i != 'e')
			putchar(i);
		i++;
        }
	putchar('\n');
	return (0);
}
