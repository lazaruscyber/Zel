#include <stdio.h>
#include <string.h>

enum FileType {
  FILE_MAIN,
  FILE_ADD_EXAMPLE,
  FILE_OOP_EXAMPLE,
  FILE_UNKNOWN
};

enum FileType get_ftype(const char *filename) {
  if (strcmp(filename, "main.zel") == 0) {
    return FILE_MAIN;
  }
  if (strcmp(filename, "add_example.zel") == 0) {
    return FILE_ADD_EXAMPLE;
  }
  if (strcmp(filename, "oop_example") == 0) {
    return FILE_OOP_EXAMPLE;
  }
  return FILE_UNKNOWN;
}

int main(int argc, char *argv[]) {
  const char *filename = argv[1];
  enum FileType ftype = get_ftype(filename);
  
  switch (ftype) {

    case FILE_MAIN: {
      FILE *main = fopen("bin/main.zel", "w");
      
      printf("Generating main.zel\n");
      
      fprintf(main, "const std = requires(\"std\")\n");
      fprintf(main, "\n");
      fprintf(main, "fn main(let argc, let *argv[]) {\n");
      fprintf(main, "\n}");

      fclose(main);
      
      break;
    }
    
    case FILE_ADD_EXAMPLE: {
      FILE *add = fopen("bin/add_example.zel", "w");

      printf("Generating add_example.zel\n");

      fprintf(add, "const std = requires(\"std\")\n");
      fprintf(add, "\n");
      fprintf(add, "fn add(let x, let, y) {\n");
      fprintf(add, "    let sum;\n");
      fprintf(add, "    sum = x + y;");
      fprintf(add, "\n}\n");
      fprintf(add, "\n");
      fprintf(add, "fn main() {\n");
      fprintf(add, "    add(5, 10);");
      fprintf(add, "\n}");
      
      fclose(add);
      
      break;
    }
    
    case FILE_OOP_EXAMPLE: {
      FILE *oop = fopen("bin/oop_example.zel", "w");
          
      printf("Generating oop_example.zel\n");

      fclose(oop);

      break;
    }
    
    case FILE_UNKNOWN:
    default:
      printf("Preset file is unknown or does not exist!\n");
      break;
  }
  
  return 0;
}
