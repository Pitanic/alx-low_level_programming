#include "lists.h"

/**
 * sum_listint - this returns sum of all the data (n) of a linked list
 * @head: this points to the first node in the linked list
 *
 * Return: 0 if the list is empty
 */

int sum_listint(listint_t *head)
{
	listint_t *temp = head;
		  int sum = 0;

	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
