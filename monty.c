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

<<<<<<< HEAD
  stack_initialize(&head);
  if (argc = 1 || argc > 2) /** If the user does not give any file or more than one argument to our program */
    {
      printf("USAGE: monty file\n");
      exit(EXIT_FAILURE);
    }
 
=======
	stack_initialize(&head);
	if (argc != 2) /** Checks if one or more arg*/
	{
		printf("USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	exit(EXIT_SUCCESS);
>>>>>>> b2ada5de10f4982dc2e3d2a44b2e8584a3fa6fac
}
