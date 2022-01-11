#include "monty.h"

/**
 * check_file - check if file can be opened
 * @argc: arg count
 * @argv: arg vector
 * Return: file
 */
FILE *check_input(int argc, char *argv[])
{
  FILE *file;

  if (argc == 1 || argc > 2) /** user gives no file or more than one argument*/
    {
      dprintf(2, "USAGE: monty file\n");
      exit(EXIT_FAILURE);
    }

  file = fopen(argv[1);

    if (file == NULL) /** not file exist */
    {
      dprintf(2, "Error: Can't open file %s\n", argv[1]);
      exit(EXIT_FAILURE);
    }

  return (file);
}
