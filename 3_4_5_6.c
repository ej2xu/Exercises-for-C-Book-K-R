//exercise 3.4, 3.5, 3.6
#include <stdlib.h>

void itoa(int n, char s[]) {
  int i = 0, sign = n;
  do {
    s[i++] = abs(n%10) + '0';
  } while ((n /= 10) != 0);
  if (sign<0)
    s[i++] = '-';
  s[i] = '\0';
  reverse(s);
}

void itob(int n, char s[], int b) {
  int j, i = 0, sign = (n < 0) ? -n : n;
  do {
    j = n % b;
    s[i++] = (j <= 9) ? j+'0' : j-10+'A';
  } while ((n /= b) > 0);
  if (sign<0)
    s[i++] = '-';
  s[i] = '\0';
  reverse(s);
}

void itoa3(int n, char s[], int w) {
  int j, i = 0, sign = (n < 0) ? -n : n;
  do {
    s[i++] = n % 10 + '0';
  } while ((n /= 10) > 0);
  if (sign<0)
    s[i++] = '-';
  while (i < w)
    s[i++] = ' ';
  s[i] = '\0';
  reverse(s);
}
