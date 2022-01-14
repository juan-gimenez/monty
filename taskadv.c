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
