#include "monty.h"
/**
 * opcfinder -Get the opcodes
 * @opcode: opcode
 * @stack: stack
 * @line_number: the .m line
 *  Return: 0
 */
int opcfinder(const char *opcode, stack_t **stack, unsigned int line_number)
{
	int i = 0;

	instruction_t opcodelist[] = {
		{"pall", pall},
		{"push", push},
		{"pint", pint},
		{"pop", pop},
		{"swap", swap},
		{"add", add},
		{"nop", nop},
<<<<<<< HEAD
=======
		{"sub", sub},
>>>>>>> 37859dc3e8a26f7f11af62f9b2539419ab965edd
		{NULL, NULL}
	};

	int size = sizeof(opcodelist) / sizeof(instruction_t);

	while (i < size)
	{
		if (strcmp(opcode, opcodelist[i].opcode) == 0)
		{
			opcodelist[i].f(stack, line_number);
			return (0);
		}
		i++;
	}
	fprintf(stderr, "L%d: unknown instruction %s\n", line_number, opcode);
	exit(EXIT_FAILURE);
}
