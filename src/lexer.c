#include "lexer.h"
#include <stdio.h>
#include <string.h>

void init_lexer(const char *filename, const char *cursor) {
  char BUFFER[200];
  FILE *read_file = fopen(filename, "r");
  
  for (cursor = 0; cursor < BUFFER; cursor++) {
    fgets(BUFFER, 200, read_file);
    cursor = strchr(BUFFER, 'l');
    printf("%s", cursor);
  }
}
