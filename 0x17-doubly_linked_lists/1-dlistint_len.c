#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list
 * @h: pointer to head node
 * Return: length of linked list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *ph = h;

	while (ph != NULL)
	{
		count++;
		ph = ph->next;
	}
	return (count);
}
