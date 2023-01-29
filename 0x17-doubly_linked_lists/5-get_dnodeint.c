#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns nth node of a dlistint_t list
 * @index: index of the node
 * @head: pointer to head of the node
 * Return: NULL if the node does not exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *trav = head;

	if (head == NULL)
		return (NULL);
	for (; index != 0; index--)
		trav = trav->next;
	return (trav);
}
