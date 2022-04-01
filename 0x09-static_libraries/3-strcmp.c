#include "main.h"

/**
 * _strcmp - function that compares two strings
 * @s1: first string parameter
 * @s2: second string parameter
 * Return: negative or positive difference
 */
int _strcmp(char *s1, char *s2)
{
	while ((*s1 && *s2) && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
