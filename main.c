#include "init.h"

int key[2][2] = { 3, 0, 2, 1 }; // Chave de codificação
int reverse_key[2][2] = { 9, 0, 8, 1 }; // Chave de decodificação

int main()
{
  create_table_alphabet();
  display_table_alphabet();
  /* Cada letra do alfabeto possui um número
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
      default:
        puts("Invalid option\n");
    }
  }

  putchar('\n');
  puts("Closing...");
  puts("Don't forget that Jesus loves you!\n");

  return 0;
}
