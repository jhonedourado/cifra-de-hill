#include "init.h"

int menu(void)
{
  int input;

  printf("E)ncrypt, D)ecrypt, Q)uit: ");
  input = getchar();
  while(getchar() != '\n')
    ;

  return toupper(input);
}
