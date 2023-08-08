#include "lists.h"

/**
 * get_nodeint_at_index - this returns the nth node of a listint_t linked list
 * @head: the first node in the linked lists
 * @index: index of the node that is to be returned
 *
 * Return: if index is greater than the number of nodes, or NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int j = 0;

	while (head && j < index)
	{
		head = head->next;
		j++;
	}

		return (head ? head : NULL);
}
