#include "lists.h"

/**
 * free_dlistint - function that frees a dlistint_t list
 * @head: pointer to head of list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp; /*pointer to traverse list*/

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
