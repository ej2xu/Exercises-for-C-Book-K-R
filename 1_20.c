write a program detab that replaces tabs in the input

#include <stdio.h>
#define TABING 6

int main() {
  int c, pos = 0, count = 0;
  while ((c = getchar()) != EOF) {
    if (c == '\t') {
      count = TABING - pos % TABING;
      while (count > 0)
        putchar(' ');
        pos++;
        count--;
    }
    else if (c == '\n') {
      putchar(c);
      pos = 0;
    }
    else {
      pos++;
      putchar(c);
    }
  }
}
