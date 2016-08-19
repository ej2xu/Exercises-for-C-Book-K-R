#include <stdio.h>

unsigned getbits(unsigned x, int p, int n) {
  return (x >> (p+1-n)) & ~(~0 << n);
}

unsigned setbits(unsigned x, int p, int n, unsigned y) {
  return (x & ~(~(~0 << n) << (p+1-n))) | (y & ~(~0 << n)) << (p+1-n);
}

unsigned invert(unsigned x, int p, int n) {
  return x ^ (~(~0 << n) << (p+1-n));
}

int wordlength(void) {
  int i = 1;
  unsigned v = (unsigned) ~0;
  while ((v = v >> 1) > 0)
    i++;
  return i;
}

unsigned rightrot(unsigned x, int n) {
  int bit;
  while (n--) {
    bit = (x&1) << (wordlength() - 1);
    x = (x >> 1) | bit;
  }
  return x;
}

int bitcount(unsigned x) {
  int count;
  for (count = 0; x != 0; x &= (x-1))
    count++;
  return count;
}
