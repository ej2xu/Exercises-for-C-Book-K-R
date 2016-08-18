#include <stdio.h>
#define MAXLINE 1000

int get_line(char s[], int lim) {
  int c, i;
  for (i = 0; i<lim-1 && (c= getchar())!=EOF && c!='\n'; ++i)
    s[i] = c;
  if (c == '\n')
    s[i++]=c;
  s[i] = '\0';
  return i;
}
// ex1_16 code
// int get_line(char s[], int lim) {
//   int c, i;
//   for (i = 0; (c= getchar())!=EOF && c!='\n'; ++i)
//     if (i < lim - 2)
//       s[i] = c;
//   if (c == '\n')
//     s[i++]=c;
//   s[i] = '\0';
//   return i;
// }

// ex1_18 code
// int remove_(char s[]) {
//   int i = 0;
//   char flag = 0;
//   while (s[i])
//     i++;
//   if (s[--i] == '\n') {
//     flag = 1;
//     i--;
//   }
//   while (i >= 0 && (s[i] == ' ' || s[i] == '\t'))
//     i--;
//   if (i >= 0) {
//     if (flag)
//       s[++i] = '\n';
//     s[++i] = '\0';
//   }
//   return i;
// }

void copy(char t[], char f[]) {
  int i = 0;
  while (t[i]=f[i])
    ++i;
}

int main() {
  int len, max = 0;
  char line[MAXLINE], longest[MAXLINE];
  while ((len = get_line(line, MAXLINE)) > 0)
    printf("%d-%s\n", len, line);
    if (len > max) {
      max = len;
      copy(longest, line);
    }
  if (max > 0)
    printf("%s", longest);
  return 0;
}
