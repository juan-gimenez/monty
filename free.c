#include "monty.h"

/**
 *free_arr - frees an array
 *@arr: array of str
 */

void free_arr(char **arr)
{
  int i = 0;

  while (arr[i] != NULL)
    {
      free(arr[i]);
      i++;
    }
  free(arr);
}

/**
 *free_stack - frees a list
 *@head: head
 */

void free_stack(stack_t **head)
{
  stack_t *i = NULL;

  while (*head != NULL)
    {
      i = *head;
      *head = (*head)->next;
      free(i);
    }
  free(*head);
  *head = NULL;
}
