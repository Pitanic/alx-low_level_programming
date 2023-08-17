#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position in a
 * linked list
 * @head: points to the first node in the list
 * @idx: index of the list where the new node should be added
 * @n: data to be inserted in the new node
 * Returns: pointer to the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int j;
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));

	if (!new || !head)
	return (NULL);

	new->n = n;
	new->next = NULL;

	if (idx == 0)
		{
		new->next = *head;
		*head = new;
		return (new);
		}

	for (j = 0; temp && j < idx; j++)
	{
		if (j == idx - 1)
		{
			new->next = temp->next;
			temp->next = new;
			return (new);
		}

		else
			temp = temp->next;
	}

	return (NULL);
}
