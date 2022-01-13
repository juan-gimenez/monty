#include "monty.h"
/**
 * add -Add the top two elem
 * @stack: point
 * @line_number: .m line
 */
void add(stack_t **stack, unsigned int line_number)
{
	int a, b, r;

	if ((*stack)->next == NULL || !(*stack))
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	a = (*stack)->n;
	b = (*stack)->next->n;

	r = a + b;

	pop(stack, line_number);

	(*stack)->n = r;
}
