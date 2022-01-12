#include "monty.h"

globo_t glob;

/**
 * push - push data
 * @head: point to pointer to struct
 * @numb: line numb
 */
void _push(stack_t **head, unsigned int numb)
{
  stack_t *newnode = NULL;

  newnode = malloc(sizeof(stack_t));
  newnode->n = glob.dato;
  newnode->prev = NULL;
  newnode->next = NULL;

  if ((*head)->next)
    {
      (*head)->prev = newnode;
      newnode->next = *head;
    }
  *head = newnode;
}

/**
 * _pall - prints the structure
 * @head: point to pointer to structure
 * @numb: line numb
 */

void _pall(stack_t **head, unsigned int numb)
{
  stack_t *goover = *head;
  (void)numb; /** not used */

  while (goover != NULL) /** recorre stack */
    {
      printf("%i\n", goover->n);
      goover = goover->next;
    }
}
