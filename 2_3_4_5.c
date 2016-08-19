//exercise 2_3, 2_4, 2_5
#include <stdio.h>
typedef enum {NO, YES} bool;

void squeeze(char s1[], char s2[]) {
  int i, j, k;
  for (i = j = 0; s1[i] != '\0'; i++)
    for (k = 0; s2[k] != '\0' && s2[k] != s1[i]; k++)
      ;
      if (s2[k] == '\0')
        s1[j++] = s1[i];
      s1[j] = '\0';
}

int any(char s1[], char s2[]) {
  int i, j;
  for (i = 0; s1[i] != '\0'; i++)
    for (j = 0; s1[j] != '\0'; j++)
      if (s1[i] == s1[j]) return i;
  return -1;
}

int htoi(char s[]) {
  int i = 0, result = 0, digit;
  bool inHex = YES;
  if (s[i] == '0') {
    if (s[++i] == 'x' || s[i] == 'X')
      ++i;
  }
  while (inHex) {
    if (s[i] >= '0' && s[i] <= '9')
      digit = s[i] - '0';
    else if (s[i] >= 'a' && s[i] <= 'f')
      digit = s[i] - 'a' + 10;
    else if (s[i] >= 'A' && s[i] <= 'F')
      digit = s[i] - 'A' + 10;
    else inHex = NO;
    if (inHex) result = result * 16 + digit;
    i++;
  }
  return result;
}

int main() {
  printf("%d\n", htoi("0xFFr"));
}
