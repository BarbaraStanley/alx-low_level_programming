#include"main.h"

/**
 * clear_bit - function that sets the value of a bit to 0 at a given index
 * @n: number given
 * @index: index starting from 0 of the bit you want to set
 * Returns: 1 if success, -1 if an error occured
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
