#include <stdio.h>
#include "main.h"
/**
 * _islower - function that checks for lowercase character
 *
 * Return: 0
 */

int _islower(int c)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (c == i)
		{
			return (1);
		}
	}
	return (0);
}
