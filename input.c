#include "init.h"

char *get_word(void)
{
  char *input = allocate_string(input, 1024); // Confira "memory.c"
  int len = 0;

  while(len < 2) {
    printf("Enter a word (2+ characters): ");
    fgets(input, 1023, stdin);
    len = strlen(input) - 1; // N�o contabiliza o '\n'
  }

  return edit_word(input);
}

/*
A fun��o abaixo garante uma palavra em caixa alta e tamanho par.

Ao usar caixa alta, os caracteres A-Z se encaixam no intervalo
65-90 do C�digo ASCII. Decrementados em 65, se encaixam perfeitamente
no intervalo 0-25 usado no alfabeto exibido ao usu�rio.

� necess�rio tamanho par pois a codifica��o e a decodifica��o ocore
de dois em dois caracteres.
*/
char *edit_word(char *input)
{
  char *pi = input;

  while(*pi != '\n')
    *pi++ = toupper(*pi);
  *pi = '\0';

  if((strlen(input) % 2) != 0)
    *pi = 'Z';

  reallocate_string(input, strlen(input)+1); // strlen(input)+1 contabiliza o caractere '\0'

  return input;
}
