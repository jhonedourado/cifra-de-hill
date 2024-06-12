#include "init.h"

char *allocate_string(char *input, int len)
{
  input = (char *)malloc(sizeof(char)*len);

  if(input == NULL) {
    puts("Memory allocation error");
    exit(1);
  }

  return input;
}

void *reallocate_string(char *input, int len)
{
  if(realloc(input, sizeof(char)*len) == NULL) {
    puts("Memory reallocation error");
    exit(1);
  }
}
