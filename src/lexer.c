#include "lexer.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void init_lexer(const char *filename, const char *cursor) {
  char BUFFER[200];
  FILE *read_file = fopen(filename, "r");
  FILE *write_file = fopen("bin/output.c", "w");
  
  while (fgets(BUFFER, sizeof BUFFER, read_file)) {
    for (char *cursor = BUFFER; *cursor != '\0'; cursor++) {
      if (strncmp(cursor, "let", 3) == 0 &&
        !isalnum(cursor[3])) {
          printf("Found let\n");
          
          fprintf(write_file, "#include <stdio.h>\n");
          fprintf(write_file, "\n");
          fprintf(write_file, "int main() {");
          fprintf(write_file, "\n");
          fprintf(write_file, "    int a = 1;");
          fprintf(write_file, "\n");
          fprintf(write_file, "}");

        } else if (strncmp(cursor, "let", 3) == 1) {
          perror("let is not defined");
        }
    }
  }
  
  for (cursor = 0; cursor < BUFFER; cursor++) {
    fgets(BUFFER, 200, read_file);
    cursor = strstr(BUFFER, "let");
    printf("%s", cursor);
  }
}
