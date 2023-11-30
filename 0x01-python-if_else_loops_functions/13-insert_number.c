#include "lists.h"
#include <stdlib.h>

/**
 * insert_node - Inserts a number into a sorted singly linked list.
 * @head: ptr to the linked list
 * @number: number to insert into the list.
 *
 * Return: NULL or new node ptr.
 */
listint_t *insert_node(listint_t **head, int number)
{
	listint_t *current = *head, *prev = NULL, *new;

	if (head == NULL)
		return (NULL);
	new = (listint_t *) malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = number;
	new->next = NULL;
	if (current == NULL || current->n >= number)
	{
		new->next = current;
		*head = new;
		return (new);
	}
	while (current)
	{
		if (current->n > new->n)
		{
			prev->next = new;
			new->next = current;
			break;
		}
		prev = current;
		current = current->next;
	}
	if (!current)
	{
		prev->next = new;
		new->next = current;
	}
	return (new);
}
