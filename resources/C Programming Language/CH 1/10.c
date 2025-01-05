#include <stdio.h>

void main() {
  int ch;
  while ((ch = getchar()) != '\n') {
    if (ch == '\t')
      printf("\\t");
    else if (ch == '\\')
      printf("\\\\");
    else
      printf("%c", ch);
  }
}
