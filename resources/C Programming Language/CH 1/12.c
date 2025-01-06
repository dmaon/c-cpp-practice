#include <stdio.h>

void main() {
  int ch;
  while ((ch = getchar()) != '\n') {
    if (ch == ' ')
      printf("\n");
    else
      printf("%c", ch);
  }
}
