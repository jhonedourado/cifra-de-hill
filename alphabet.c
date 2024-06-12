#include "init.h"

int alphabet[26][2]; // letra do alfabeto | número correspondente

void create_table_alphabet(void)
{
  for(int i = 0; i < 26; i++)
    for(int j = 0; j < 2; j++) {
      if(j == 0)
        alphabet[i][j] = 65 + i; // Código ASCII (65-90: A-Z)
      if(j == 1)
        alphabet[i][j] = i;
    }
}

void display_table_alphabet(void)
{
  int i;

  for(i = 0; i < 77; i++)
    putchar('=');
  putchar('\n');

  for(i = 0; i < 26; i++)
    printf("%-3c", alphabet[i][0]);
  putchar('\n');

  for(i = 0; i < 26; i++)
    printf("%-3d", alphabet[i][1]);
  putchar('\n');

  for(i = 0; i < 77; i++)
    putchar('=');
  puts("\n");
}
