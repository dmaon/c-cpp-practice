#include <stdio.h>
#define MAXLINELENGTH 70
#define MAXLINES 5

int getLine(char line[MAXLINELENGTH]);
void reverse(char line[MAXLINELENGTH]);

void main() {
  int ch, lineLength = 1; // because get first line
  char line[MAXLINELENGTH];

  while (lineLength != 0) {
    lineLength = getLine(line);
    reverse(line);

    for (int i = 0; line[i] != '\0'; i++) {
      printf("%c", line[i]);
      line[i] = '\0';
    }
    printf("\n");
    
  }
}


int getLine(char line[MAXLINELENGTH]) {
  int ch, i = 0;
  while ((ch = getchar()) != '\n' && i < MAXLINELENGTH) {
    line[i++] = ch;
  }
  line[i] = '\0';
  return i; // return lenght of line
}

void reverse(char line[MAXLINELENGTH]) {
  int tmpChar, index = 0;
  // find end of string
  for (; line[index] != '\0'; index++);

  // reverse string inplace
  index -= 1; // last char before \0
  for (int i = 0; i < index  ; i++, index--) {
    tmpChar = line[i];
    line[i] = line[index];
    line[index] = tmpChar;
  }
}


