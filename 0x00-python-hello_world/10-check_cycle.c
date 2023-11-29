#include "lists.h"

/**
  * check_cycle - checks if a singly linked list has a cycle in it
  * @list: To check if there is a cycle
  *
  * Return: 0 if there is no cycle, 1 if there is a cycle
  */
int check_cycle(listint_t *list)
{
	listint_t *slow = list->next;
	listint_t *fast = list->next->next;

	if (list == NULL || list->next == NULL)
	{
		return (0);
	}

	while (fast != NULL && fast->next != NULL)
	{
		if (slow == fast)
		{
			return (1);
		}
		slow = slow->next;
		fast = fast->next->next;
	}
	return (0);
}
