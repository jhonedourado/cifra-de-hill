#include "init.h"

extern key[2][2];

void encrypt(void)
{
  char *word, *encrypted_word;

  word = get_word(); // Confira "input.c"
  encrypted_word = allocate_string(encrypted_word, strlen(word));

  // key · word = encrypted_word
  matrix_multiplication(key, word, encrypted_word); // Confira "operations.c"

  return display_operation(word, encrypted_word); // Confira "display.c"
}
