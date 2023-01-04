#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * binary_search - function that searches for a value in
 * a sorted array of integers using the Binary search algorithm
 * @array: is a pointer to the first element of the array to search in
 * @size: number of elements in the array
 * @value: value to search for
 * Return: the index where value is located
 */

int binary_search(int *array, size_t size, int value)
{
	int l = 0;
	int a;
	int r = size - 1;
	int mid;

	while (l <=  r && array[mid] != value)
	{
		mid = (l + r) / 2;
		printf("Searching in array: ");
		for (a = l; a < r; a++)
		{
			printf("%d, ", array[a]);
		}
		printf("%d\n", array[a]);

		if (array[mid] == value)
			return (mid);
		else if (value > array[mid])
		{
			l = mid + 1;
		}
		else if (value < array[mid])
		{
			r = mid - 1;
		}
		else
			return (-1);
	}
	return (-1);
}
