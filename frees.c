#include "monty.h"
/**
 * ch_num - checks validity of number assrg in opcode
 * @numstr: number arg of opcode as string
 * @stack: head of stack (double linked list)
 * @line: line number in file
 */
void ch_num(char *numstr, stack_t **stack, int line)
{
	int i = 0;

	if (!numstr)
	{
		fprintf(stderr, "L%u: usage: push integer\n", line);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}
	if (numstr[0] == '-')
		i++;
	for (; numstr[i]; i++)
	{
		if (numstr[i] >= '0' && numstr[i] <= '9')
			continue;
		else
		{
			fprintf(stderr, "L%u: usage: push integer\n", line);
			free_stack(*stack);
			exit(EXIT_FAILURE);
		}
	}
}
/**
  * free_stack - frees a stack_t list
  * @stack: pointer to stack_t list
  * Return: void
  */
void free_stack(stack_t *stack)
{
	if (stack)
	{
		if (stack->next)
			free_stack(stack->next);
		free(stack);
	}
}
