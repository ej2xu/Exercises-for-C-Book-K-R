/* Write a program to copy its input to its output, replacing each string of one or more blanks by a single blank. */
#include <stdio.h>

int main() {
  int c, last = 1;
  while ((c = getchar()) != EOF) {
    if (c != ' ' || last != c) putchar(c);
    last = c;
  }
  return 0;
}
