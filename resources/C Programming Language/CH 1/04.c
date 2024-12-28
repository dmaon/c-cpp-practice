#include <stdio.h>

int main() {
    int celsius;
    float fahr;
    printf("    Celsius    |    Fahrenheit\n");
    printf("---------------|--------------\n");
    for (celsius = 50; celsius >= -40; celsius -= 10) {
      fahr = (celsius * 9/5) + 32;
      printf("    %-7d    |    %-10.f \n", celsius, fahr);
    }
    return 0;
}
