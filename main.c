#include "init.h"

int key[2][2] = { 3, 0, 2, 1 }; // Chave de codifica��o
int reverse_key[2][2] = { 9, 0, 8, 1 }; // Chave de decodifica��o

int main()
{
  create_table_alphabet();
  display_table_alphabet();
  /* Cada letra do alfabeto possui um n�mero
  correspondente. Confira "alphabet.c" */

  int choice;

  // Confira "menu.c"
  while((choice = menu()) != 'Q') {
    switch(choice) {
      case 'E':
        encrypt(); // Confira "encrypt.c"
        break;
      case 'D':
        decrypt(); // Confira "decrypt.c"
        break;
      case 'Q':
        break;
      default:
        puts("Invalid option\n");
    }
  }

  return 0;
}
