#include <stdio.h>

void main() {
  int ch;
  int nTabs, nEnters, nSpaces = 0;
  while ((ch = getchar()) != -1) {
    if (ch == '\t')
      nTabs++;
    else if(ch == '\n')
      nEnters++;
    else if (ch == ' ')
      nSpaces++;
  }
  printf("\n#spaces %d, #newlines: %d, #tabs: %d\n", nSpaces, nEnters, nTabs);
}
