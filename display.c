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
    printf("%d ", (*pi++)-65); // Remove o valor referente ao Código ASCII do input do usuário
  printf("] >> [ ");
  for(i = 0; i < len; i++)
    printf("%d ", *po++);
  printf("]\n");

  po = output;
  for(i = 0; i < len; i++)
    *po++ += 65; // Incrementa o valor referente ao Código ASCII no resultado da operação
  printf("%s >> %s\n\n", input, output);

  free(input);
  free(output);
}
