#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
  if (argc != 2) {
    fprintf(stderr, "引数の個数が正しくありません\n");
    return 1;
  }

  char *p = argv[1];

  printf("define i32 @main() {\n");
  printf("  %%1 = add i32 %ld, 0\n", strtol(p, &p, 10));
  
  int index = 0;
  while (*p) {
    if (*p == '+') {
      p++;
      index++;
      printf("  %%%d = add i32 %%%d, %ld\n", index + 1, index, strtol(p, &p, 10));
      continue;
    }

    if (*p == '-') {
      p++;
      index++;
      printf("  %%%d = sub i32 %%%d, %ld\n", index + 1, index, strtol(p, &p, 10));
      continue;
    }

    fprintf(stderr, "予期しない文字です: '%c'\n", *p);
    return 1;
  }

  printf("  ret i32 %%%d\n", index + 1);
  printf("}\n");
  return 0;
}