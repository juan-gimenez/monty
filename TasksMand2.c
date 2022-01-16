#include "monty.h"
/**
 * add - adds the top two elements of the stack.
 * @stack: head of stack (double linked list)
 * @line: line number in file
 */
void add(stack_t **stack, unsigned int line)
{
	stack_t *aux = *stack;
	int len = 0;

	while (aux)
	{
		len++;
		aux = aux->next;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%u: can't add, stack too short\n", line);
		exit(EXIT_FAILURE);
	}
	(*stack)->next->n += (*stack)->n;
	pop(stack, line);
}
/**
* nop - useful function
* @stack: head of stack (double linked list)
* @line: line number in file
*/
void nop(stack_t **stack, unsigned int line)
{
	(void)stack;
	(void)line;
}
