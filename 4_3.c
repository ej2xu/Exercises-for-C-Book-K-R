#include <stdio.h>
#include <stdlib.h>

#define MAXOP 100
#define NUMBER  '0'

int getop(char []);
void push(double);
double pop(void);

main() {
  int type;
  double op2;
  char s[MAXOP];

  while ((type = getop(s)) != EOF) {
    switch (type) {
      case '%':
        op2 = pop();
        if (op2 != 0.0)
          push(fmod(pop(), op2));
        else
          printf("error: zero divisor\n");
        break;
    }
  }
}
