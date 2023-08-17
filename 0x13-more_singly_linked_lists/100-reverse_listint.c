#include "lists.h"

/**
 * reverse_listint - function that reverses a linked list
 * @head: pointer to the first node in the linked list
 * Return: a pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *new = NULL;

	while (*head)
	{
		new = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = new;
	}

	*head = prev;

	return (*head);
}
