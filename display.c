#include "init.h"

void *display_operation(char *input, char *output)
{
  char *pi,*po;
  int len, i;

  pi = input;
  po = output;
  len = strlen(input);

  printf("\n[ ");
  for(i = 0; i < len; i++)
    printf("%d ", (*pi++)-65); // Remove o valor referente ao C�digo ASCII do input do usu�rio
  printf("] >> [ ");
  for(i = 0; i < len; i++)
    printf("%d ", *po++);
  printf("]\n");

  po = output;
  for(i = 0; i < len; i++)
    *po++ += 65; // Incrementa o valor referente ao C�digo ASCII no resultado da opera��o
  printf("%s >> %s\n\n", input, output);

  free(input);
  free(output);
}
