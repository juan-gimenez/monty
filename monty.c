#include "monty.h"

glob_t glob;

/**
 * stack_initialize - initialize
 * @head: top of the stack
 **/
void stack_initialize(stack_t **head)
{
	*head = NULL;
	glob.top = head; /** set the top of the stack to head = NULL **/
}

/**
 * main - monty interpreter
 * @argc: number of command line arguments
 * @argv: array of strings (arguments)
 * Return: 0
 **/
int main(int argc, char **argv)
{
	stack_t *head;

	stack_initialize(&head);
	if (argc != 2) /** Checks if one or more arg*/
	{
		printf("USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	exit(EXIT_SUCCESS);
}
