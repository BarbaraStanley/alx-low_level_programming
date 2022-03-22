#include "main.h"

/**
 * _strlen - function that returns the length of a string
 * @s: type string parameter
 * Return: int 0
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len])
		len++;
	return (len);
}
