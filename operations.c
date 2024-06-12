#include "init.h"

void matrix_multiplication(int key[2][2], char *word, char *result)
{
  char *pw, *pr;
  int count, len, i;

  pw = word;
  pr = result;

  count = 0;
  len = strlen(word);

  /* Como a chave (key) é de ordem 2, deve-se multiplica-lá
  por cada vetor 2x1 que compõe a palavra (word) */
  while(count < len/2) {
    for(i = 0; i < 2; i++)
      *pr++ = ((key[i][0] * (*pw++)) + (key[i][1] * (*pw--))) % 26;
      // O resultado deve corresponder ao alfabeto exibido para o usuário (A-Z: 0-25)
    for(i = 0; i < 2; i++)
      pw++;
    count++;
  }
}
