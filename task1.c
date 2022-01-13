#include "monty.h"
/**
 * pint -Print value at top
 * @stack: pointer
 * @line_number: .m line num
 */
void pint(stack_t **stack, unsigned int line_number)
{
	int value;

	(void)line_number;

	if (!stack || !*stack)
	{
		fprintf(stderr, "L%d: can´t pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	value = (*stack)->n;
	printf("%d\n", value);
}
