#include "init.h"

extern reverse_key[2][2];

void decrypt(void)
{
  char *encrypted_word, *decrypted_word;

  encrypted_word = get_word();
  decrypted_word = allocate_string(decrypted_word, strlen(encrypted_word));

  // reverse_key · encrypted_word = decrypted_word
  matrix_multiplication(reverse_key, encrypted_word, decrypted_word);

  return display_operation(encrypted_word, decrypted_word);
}
