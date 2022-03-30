#include "main.h"

/**
 * _memset - function that fills memory with a constant byte
 * @s: pointer for constant
 * @b: constant
 * @n: maximum bytes to use
 * Return: pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; n > 0; a++, n--)
	{
		s[a] = b;
	}
	return (s);
}
