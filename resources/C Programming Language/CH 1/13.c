#include <stdio.h>

void main() {
  int ch, iRow = 0, length = 0;
  int wordsCounts = 5;
  int wordsLength[wordsCounts];
  char words[wordsCounts][100];
 
  while (iRow < wordsCounts) {
    ch = getchar();
    if (ch != ' ' && ch != '\n') {
      if (length < 100)
      {
	words[iRow][length] = ch;
	length++;
      }
    } else if (ch == ' ' || ch == '\n') {
      wordsLength[iRow] = length;
      iRow++;
      length = 0;
    }
    if (ch == '\n')
      break;
  }

  
  for (int i = 0; i < iRow; i++) {
    for (int j = 0; j < 5; j++) {
      if (words[i][j] != '\0')
	printf("%c", words[i][j]);
      else
	printf(" ");
    }

    printf(": ");
    for (int j = 0; j < wordsLength[i]; j++) {
      printf("#");
    }
    printf(" %d", wordsLength[i]);
    
    printf("\n");
  }
   
}
