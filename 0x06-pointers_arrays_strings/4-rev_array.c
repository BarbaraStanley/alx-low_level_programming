#include "main.h"

/**
 * reverse_array - function that reverses the content of an array of integers
 * @a: pointer to array of integers
 * @n: number of elements of array
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int p, index;

	for (index = n - 1; index >= n / 2; index--)
	{
		p = a[n - 1 - index];
		a[n - 1 - index] = a[index];
		a[index] = p;
	}
}
