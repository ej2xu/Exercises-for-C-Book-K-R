// exercise 3.1, 3.2, 3,3
int bsearch(int x, int v[], int n) {
  int low, high, mid;
  low = 0;
  high = n-1;
  mid = (low + high)/2;
  while (low <= high && x != v[mid]) {
    if (x < v[mid])
      high = mid -1;
    else
      low = mid + 1;
    mid = (low + high)/2;
  }
  if (x == v[mid])
    return mid;
  return -1;
}

void unescape(char s[], char t[]) {
  int i, j;
  for (i = j = 0; t[i] != '\0'; i++) {
    if (t[i] != '\\')
      s[j++] = t[i];
    else
      switch(t[++i]) {
        case 't': s[j++] = '\t'; break;
        case 'n': s[j++] = '\t'; break;
        default:
          s[j++] = '\\';
          s[j++] = t[i];
          break;
      }
  }
  s[j] = '\0';
}

void expand(char s1[], char s2[]) {
  int i = 0, j = 0;
  char c;
  while ((c = s1[i++]) != '\0') {
    if (s1[i] == '-' && s1[i+1] >= c) {
      while ((s2[j++] = c++) < s1[i+1])
        ;
      i++;
    }
    else
      s2[j++] = c;
  }
  s2[j] = c;
}
