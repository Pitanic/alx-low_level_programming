#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - counts the number of nodes in looped linked list
 * @head: pointer to check the first element in the linked list
 * Return: 0 if list not looped, or the nmber of node in the list
 */

size_t looped_listint_len(const listint_t *head)
{
	const listint_t *bike, *car;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	bike = head->next;
	car = (head->next)->next;

	while (car)
	{
		if (bike == car)
		{
			bike = head;
			while (bike != car)
			{
				nodes++;
				bike = bike->next;
					car = car->next;
			}

			bike = bike->next;

			while (bike != car)
			{
				nodes++;
				bike = bike->next;
			}
			return (nodes);
		}

		bike = bike->next;
		car = (car->next)->next;
	}

	return (0);
}



/**
 * print_listint_safe - prints a linked list
 * @head: pointer to the first element in the node
 * Return: the number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, index = 0;

	nodes = looped_listint_len(head);

	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (index = 0; index < nodes; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("->[%p] %d\n", (void *)head, head->n);
	}

	return (nodes);
}
