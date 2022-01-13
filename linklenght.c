#include "monty.h"
/**
 * linklen -Length of linked list
 * @stack: point
 * @Return size of list
 */
size_t linklen(stack_t **stack)
{
	size_t counter = 0;
	stack_t *tmp;

	if (*stack == NULL)
	{
		return (0);
	}
	tmp = *stack;

	while (tmp)
	{
		tmp = tmp->next;
		counter++;
	}
	return (counter);
}
