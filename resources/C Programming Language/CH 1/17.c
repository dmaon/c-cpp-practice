#include <stdio.h>
#define MAXLINES 4
#define MAXLENGTH 100

void main() {
  int ch, row = 0, col = 0, lineLength = 0;
  char lines[MAXLINES][MAXLENGTH];
  int linesLength[MAXLINES] = {0};
  
  while (row < MAXLINES) {
    ch = getchar();

    if (ch == '\n') {
      col = 0;
      row++;
    } else if (col < MAXLENGTH) {
      lines[row][col] = ch;
      linesLength[row]++;
      col++;
    }

  }

  for (int i = 0; i < MAXLINES; i++) {
    if (linesLength[i] >= 8) { // print lines with 8 character and more only
	for (int j = 0; j < linesLength[i]; j++)
	  printf("%c", lines[i][j]);
	printf("\n");
    }
  }
}
