// write a program entab that replaces strings of blanks

#include <stdio.h>
#define TABING 6

int main() {
  int c, pos = 0, bcount = 0, tcount = 0;
  while ((c = getchar()) != EOF) {
    if (c == ' ') {
      if (pos % TABING != TABING - 1)
        ++bcount;
      else {
        bcount = 0;
        ++tcount;
      }
    }
    else {
      while (tcount > 0) {
        putchar('\t');
        tcount--;
      }
      if (c == '\t')
        bcount = 0;
      while (bcount > 0) {
        putchar(' ');
        tcount--;
      }
      if (c == '\n')
        pos = 0;
      putchar(c);
    }
    pos++;
  }
}
