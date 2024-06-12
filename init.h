#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

// Protótipos

void create_table_alphabet(void);
void display_table_alphabet(void);

int menu(void);

void encrypt(void);

void decrypt(void);

char *get_word(void);
char *edit_word(char *input);

char *allocate_string(char *input, int len);
void *reallocate_string(char *input, int len);

void matrix_multiplication(int key[2][2], char *word, char *result);

void *display_operation(char *input, char *output);

// Constantes

// Variáveis
