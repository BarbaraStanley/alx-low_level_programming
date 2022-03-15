#include <stdio.h>
#include "main.h"
/**
 * _islower - function that checks for lowercase character
 *
 * c - integer argument
 * Return: 0
 */

int _islower(int c)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		/* int c argument */
		if (c == i)
		{
			return (1);
		}
	}
	return (0);
}
