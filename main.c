#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
  if (argc != 2) {
    fprintf(stderr, "引数の個数が正しくありません\n");
    return 1;
  }

  printf("; ModuleID = 'main.c'\n");
  printf("source_filename = \"main.c\"\n");
  printf("target datalayout = \"e-m:e-p270:32:32-p271:32:32-p272:64:64-i64:64-f80:128-n8:16:32:64-S128\"\n");
  printf("target triple = \"x86_64-pc-linux-gnu\"\n");
  printf("\n");
  printf("; Function Attrs: norecurse nounwind readnone uwtable\n");
  printf("define dso_local i32 @main() local_unnamed_addr #0 {\n");
  printf("  ret i32 %d\n", atoi(argv[1]));
  printf("}\n");
  printf("\n");
  printf("attributes #0 = { norecurse nounwind readnone uwtable \"correctly-rounded-divide-sqrt-fp-math\"=\"false\" \"disable-tail-calls\"=\"false\" \"frame-pointer\"=\"none\" \"less-precise-fpmad\"=\"false\" \"min-legal-vector-width\"=\"0\" \"no-infs-fp-math\"=\"false\" \"no-jump-tables\"=\"false\" \"no-nans-fp-math\"=\"false\" \"no-signed-zeros-fp-math\"=\"false\" \"no-trapping-math\"=\"false\" \"stack-protector-buffer-size\"=\"8\" \"target-cpu\"=\"x86-64\" \"target-features\"=\"+cx8,+fxsr,+mmx,+sse,+sse2,+x87\" \"unsafe-fp-math\"=\"false\" \"use-soft-float\"=\"false\" }\n");
  printf("\n");
  printf("!llvm.module.flags = !{!0}\n");
  printf("!llvm.ident = !{!1}\n");
  printf("\n");
  printf("!0 = !{i32 1, !\"wchar_size\", i32 4}\n");
  printf("!1 = !{!\"clang version 10.0.0-4ubuntu1 \"}\n");
  return 0;
}