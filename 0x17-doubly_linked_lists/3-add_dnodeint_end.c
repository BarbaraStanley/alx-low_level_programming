#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: new node
 * @n: value for new node
 * Return: address of new element, NULL if failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *end;
	dlistint_t *last;

	end = malloc(sizeof(dlistint_t));
	if (end == NULL)
		return (NULL);

	end->next = NULL;
	end->n = n;

	if (*head == NULL) /*if list is empty, head = new node*/
	{
		end->prev = NULL;
		*head = end;
		return (end);
	}

	last = *head;
	while (last->next != NULL)
	{
		last = last->next; /*traverse the list with last pointer*/
	}

	last->next = end; /* insert new node to last pointer*/
	end->prev = last;
	return (end);
}
