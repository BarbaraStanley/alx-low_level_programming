#include <stdio.h>
#include "main.h"
/**
 * _abs - function that computes the absolute value of an integer
 * @n: integer recieved
 * Return: integer
 */

int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
}
