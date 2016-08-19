#include <stdio.h>
#include <limits.h>

int main() {
  printf("signed char max = %d, calcuate %d\n", SCHAR_MAX, (char)((unsigned char)~0 >> 1));
  return 0;
}
