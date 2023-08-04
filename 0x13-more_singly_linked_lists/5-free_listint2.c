#include "lists.h"

/**
 * free_listint2 - this frees a listint_t list
 * @head: the listint_t list which will be freed
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}

	*head = NULL;
}
