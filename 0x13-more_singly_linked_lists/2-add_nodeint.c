#include "lists.h"

/**
 * add_nodeint - function adds new node at the beginning of a listint_t list
 * @head: this points to the first node in the list
 * @n: the data that will be inserted in the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = (listint_t *)malloc(sizeof(listint_t));
	if (!new)
	{

		return (NULL);
	}

	new->n = n;
	new->next = *head;
	*head = new;
return (new);
}
