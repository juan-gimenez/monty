#include "monty.h"
/**
 * push -Add new node at top of stack_t
 * @stack: point to stack
 * @line_number: l.n of .m
 * @push_value: value to push
 */
void push(stack_t **stack, unsigned int line_number, int push_value)
{
	stack_t *new_node;

	(void)line_number;

	if (!stack)
	{
		exit(EXIT_FAILURE);
	}
	new_node = malloc(sizeof(stack_t));
	if (!new_node)
	{
		printf("Error with malloc\n");
		exit(EXIT_FAILURE);
	}
	new_node->n = push_value;
	if (*stack)
	{
		(*stack)->prev = new_node;
		new_node->next = *stack;
		new_node->prev = NULL;
	}
	*stack = new_node;
}
/**
 * pall -Print all elem from top
 * @stack: Point to head
 * @line_number: line of .m
 * Return: Num of nodes
 */
void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp = *stack;
	(void)line_number;

	while (tmp)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
	}
}
