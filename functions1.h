#include "monty.h"

/**
 * _pall - prints the structure
 * @head: point to pointer to structure
 * @numb: line numb
 */

void _pall(stack_t **head, unsigned int numb)
{
  stack_t *goover = *head;
  (void)numb; /** not used */
  if (goover == NULL)
    {
      return (0);
    }
  
  while (goover != NULL) /** recorre stack */
    {
      printf("%i\n", goover->n);
      goover = goover->next;
    }
}
