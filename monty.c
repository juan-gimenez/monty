#include "monty.h"

glob_t glob;

/**
 * stack_init - initialize 
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
 * Return: 
 **/
int main(int argc, char **argv)
{
  stack_t *head;

  stack_initialize(&head);
  if (argc = 1 || argc > 2) /** If the user does not give any file or more than one argument to our program */
    {
      printf("USAGE: monty file\n");
      exit(EXIT_FAILURE);
    }
 
}
