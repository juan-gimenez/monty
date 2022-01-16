#include "monty.h"
/**
* opcfinder - checks function in a certain line
* @command: monty opcode
* @line: line num of file
* @stack: pointer to double linked list
*/
void opcfinder(char *command, int line, stack_t **stack)
{
	int i;
	/* {opcode, function} */
	instruction_t instr_list[] = {
		{"push", push}, {"pall", pall}, {"pop", pop}, {"pint", pint},
		{"swap", swap}, {"add", add}, {"nop", nop}, {"#", nop}, {NULL, NULL}
	};

	for (i = 0; instr_list[i].opcode; i++)
	{
		if (strcmp(instr_list[i].opcode, command) == 0)
		{
			instr_list[i].f(stack, line);
			break;
		}
	}
	if (!(instr_list[i].opcode))
	{
		fprintf(stderr, "L%u: unknown instruction %s\n",
		line, command);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}
}
