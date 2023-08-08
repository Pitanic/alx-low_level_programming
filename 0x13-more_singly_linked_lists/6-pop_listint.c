#include "lists.h"

/**
 * pop_listint - this deletes the head node of a listint_t linked list
 * @head: this point to the first part in the list
 *
 * Return: head note data (n), or 0 if the linked list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (*head == NULL)
	{
		return (0);
	}

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
