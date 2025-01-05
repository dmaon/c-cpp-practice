#include <stdio.h>

void main() {
  int ch;
  int spaceFlag = 0;
  while ((ch=getchar()) != '\n') {
    if (ch == ' ' && spaceFlag == 0) {
      putchar(' ');
      spaceFlag = 1;
    } else if (ch != ' ') {
      putchar(ch);
      spaceFlag = 0;
    }
  }
}
