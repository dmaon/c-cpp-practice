#include <stdio.h>
#define MAXLINES 5
#define MAXLENGTH 100

void main() {
  int ch, i = 0, j = 0;
  char lines[MAXLINES][MAXLENGTH];

  while (i < MAXLINES) {
    ch = getchar();
    if (ch != ' ' && ch != '\t' && j < MAXLENGTH) {
      lines[i][j] = ch;
      j++;
    }

    if (ch == '\n') {
      lines[i][j] = '\n';
      i++;
      j = 0;
    }
  }

  for (i = 0; i < MAXLINES; i++) {
    for (j = 0; lines[i][j] != '\n'; j++)
      printf("%c", lines[i][j]);
    printf("\n");
  }
}
