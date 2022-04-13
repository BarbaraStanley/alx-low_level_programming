#include "function_pointers.h"

/**
 * array_iterator - Executes a functiongiven as parameter on each array element
 * @array: The array
 * @size: The size of array
 * @action: A pointer to the function to be used
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;

	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}
