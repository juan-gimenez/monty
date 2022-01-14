#include "monty.h"

/**
 *add_nodeint - adds a new node at the beginning of a dlistint_t list.
 *@head: head
 *@n: number at the new node
 *Return: the address of the new element, or NULL if it failed
 */

stack_t *add_nodeint(stack_t **head, const int n)
{
	stack_t *new = NULL, *tmp = *head;


	new = malloc(sizeof(stack_t));
	if (new == NULL)
	{
		fprintf(stderr, "Error: malloc failed");
		exit(EXIT_FAILURE);
	}
	new->n = n;
	if (tmp == NULL)
	{
		new->next = *head;
		new->prev = NULL;
		*head = new;
		return (*head);
	}
	else
	{
		new->next = *head;
		new->prev = (*head)->prev;
		(*head)->prev = new;
		*head = new;
		return (*head);
	}
	return (NULL);
}
