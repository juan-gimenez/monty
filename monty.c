#include "monty.h"

/**
 * main - monty
 * @argc: number of command line arguments
 * @argv: array of strings (arguments)
 * Return: 0
 **/
int main(int argc, char **argv)
{
  int getresult;
  char *buffer = NULL;
  size_t size = 0;
  unsigned int numbofline = 1;
  char **array = NULL;
  stack_t **s = NULL;
  FILE *openf = NULL;
  
  s = malloc(sizeof(stack_t));
  if (s == NULL)
    {
      printf("Error: malloc failed\n");
      exit(EXIT_FAILURE);
    } 
  if (argc != 2) /** Checks if one or more arg*/
    {
      printf("USAGE: monty file\n");
      exit(EXIT_FAILURE);
    }
  openf = fopen(argv[1], "r");
  if (!openf)
    {
      printf(stderr, "Can't open file <%s>\n", argv[1]);
      return (EXIT_FAILURE); /** open fails */
    }
  
  getresult = getline(&buffer, &size, openf);
  while (getresult != -1) /** getline succees */
    {
      array = tokenize(buffer, " \n\t");
      opcodesfinder(array, s, numbofline);
      numbofline++;
    }
  free(s);
  free_arr(array);
  fclose(openf);
  return (1); /** success **/
}
