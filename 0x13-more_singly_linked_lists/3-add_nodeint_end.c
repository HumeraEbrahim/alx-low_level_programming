#include "lists.h"

/**
*add_nodeint - add a new node at the end of a linked list.
*Description: adds a new node at the end of a listint_t list.
*@head: pointer to the head of a list.
*@n: n element.
*
*Return: address of the newly added node.
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new, *last;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
		*head = new;

	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = new;
	}

	return (*head);
}
