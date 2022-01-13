#include "monty.h"
/**
 * pop -Delate top elem
 * @stack: pointer
 * @line_number: line .m
 */
void pop(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp = *stack;

	(void)line_number;

	if (*stack == NULL || stack == NULL)
	{
		fprintf(stderr, "L%d: Stack empty\n", line_number);
		free(*stack);
		exit(EXIT_FAILURE);
	}
	tmp = (*stack)->next;
	*stack = tmp;
}
