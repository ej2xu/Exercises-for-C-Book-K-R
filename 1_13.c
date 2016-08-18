/* Write a porgram to print a histogram of the lengths of words in its input. */

#include <stdio.h>
#define MAXWORD 10

int main() {
  int c, nc, overflow, max, i;
  int wl[MAXWORD+1];
  nc = overflow = 0;
  for (i = 0; i <= MAXWORD; i++)
    wl[i] = 0;

  while ((c=getchar()) != EOF) {
      if (c == ' ' || c == '\n' || c == '\t') {
        if (nc > 0) {
          if (nc > MAXWORD) overflow++;
          else wl[nc]++;
          nc = 0;
        }
      }
      else nc++;
  }

  max = 0;
  for (i = 1; i <= MAXWORD; i++)
    if (wl[i] > max) max = wl[i];

  for (i = 1; i <= MAXWORD; i++) {
    printf("%5d - %5d : ", i, wl[i]);
    while (wl[i]-- > 0)
      putchar('*');
    putchar('\n');
  }
  if (overflow > 0)
  printf("There are %d words > %d\n", overflow, MAXWORD);

  return 0;
}
