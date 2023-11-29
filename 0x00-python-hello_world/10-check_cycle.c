#include "lists.h"
#include <stdlib.h>

/**
 * check_cycle - checks if a singly linked list has a cycle in it
 * @list: points to the start of the linked list
 *
 * Return: 0 if there is no cycle, 1 if there is a cycle
 */
int check_cycle(listint_t *list)
{
    listint_t *hash_table[1024] = {NULL};
    int i;

    while (list)
    {
        for (i = 0; i < 1024; i++)
        {
            if (hash_table[i] == list)
                return (1);
        }
        hash_table[i] = list;
        list = list->next;
    }

    return (0);
}
