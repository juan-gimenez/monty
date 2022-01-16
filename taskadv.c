#include "monty.h"
/**
 * comment - #
 * @line: check
 * Return: 0 if no comment, 1 if #
 */
unsigned int comment(char *line_number)
{
  int com = 0;

  /** for (int com = 0; line_number[com]; com++) */
  while(line_number[com])
    {
      if (line_number[com] == ' ')
	continue;
      else if (line_number[com] == '#')
	return (1);
      else
	return (0);
      com++;
    }
  return (0);
}

/**
 * sub - sub
 * @head: ptr to ptr to head
 * @line_number:  line count
 * Return: no return
 */
void sub(stack_t **head, unsigned int line_number)
{

  if (!*head || !(*head)->next)
    {
      fprintf(stderr, "L%d: can't sub, stack too short\n", line_number);
      exit(EXIT_FAILURE);
    }
  else
    {
      (*head)->next->n -= (*head)->n;
      pop(head, line_number);
    }
}
