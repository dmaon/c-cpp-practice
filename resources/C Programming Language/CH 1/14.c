#include <stdio.h>

void main() {
  int maxLetterSize = 53;
  int freqLetters[maxLetterSize]; // A-Z + a-z  + 1 for space
  int ch, letterIndex = -1, i, j;

  // reset all values to zero
  for (i = 0; i < maxLetterSize; i++) {
    freqLetters[i] = 0;
  }

  
  while ((ch = getchar()) != '\n') {
    // find letter index
    if (ch >= 65 && ch < 91)
      letterIndex = ch - 65;
    else if (ch >= 97 && ch < 123)
      letterIndex = ch - 71;
    else if (ch == ' ')
      letterIndex = maxLetterSize - 1;
    else
      letterIndex = -1;
    
    // increase value
    if (letterIndex != -1) {
      if (freqLetters[letterIndex] != '\0' && freqLetters[letterIndex] > 0)
	freqLetters[letterIndex] += 1;
      else
	freqLetters[letterIndex] = 1;
    }
    
    
  }


  printf("Histogram of the frequencies of different characters\n");
  // make horizontal bar chart
  for (i = 0; i < maxLetterSize; i++) {

    if (freqLetters[i] == 0)
      continue;
    
    if (i >= 0 && i < 26)
      printf("%c: ", i + 65);
    else if (i >= 26 && i < 52)
      printf("%c: ", i + 71);
    else if (i == (maxLetterSize - 1))
      printf(" : ");

     for (j = 0; j < freqLetters[i]; j++)
      printf("#");
    printf(" %d\n", freqLetters[i]);
  }
}
