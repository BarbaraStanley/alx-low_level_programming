#include "main.h"

/**
 * string_toupper - function that changes all lowercase letters to uppercase
 * Return: pointer to changed string
 * @s: string parameter
 */

char *string_toupper(char *s)
{
	int index = 0;

	while (s[index])
	{
		if (s[index] >= 'a' && s[index] <= 'z')
			s[index] -= 32;
		index++;
	}
	return (s);
}
