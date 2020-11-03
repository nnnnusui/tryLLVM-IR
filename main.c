#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
  if (argc != 2) {
    fprintf(stderr, "引数の個数が正しくありません\n");
    return 1;
  }

  printf("define i32 @main() {\n");
  printf("  ret i32 %d\n", atoi(argv[1]));
  printf("}\n");
  return 0;
}