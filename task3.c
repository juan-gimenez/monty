#include "monty.h"
/**
 * swap -Swat the first two elm from top
 * @stack: point
 * @line_number: .m L
 */
void swap(stack_t **stack, unsigned int line_number)
{
	int first_tmp = 0, second_tmp = 0, len = 0;

	len = linklen(stack);

	if (len < 2)
	{
		fprintf(stderr, "L%d: Stack too short", line_number);
		exit(EXIT_FAILURE);
	}
	first_tmp = (*stack)->n;
	second_tmp = (*stack)->next->n;
	(*stack)->n = second_tmp;
	(*stack)->next->n = first_tmp;
}
