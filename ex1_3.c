#include <stdio.h>

int main() {
  float fahr, celsius;
  int lower, upper, step;
  lower = 0;
  upper = 300;
  step = 20;
  printf("Fahr to celsius");
  fahr = lower;
  while (fahr <= upper) {
    celsius = (5.0/9) * (fahr - 32.0);
    printf("%f  %f\n", fahr, celsius);
    fahr += step;
  }
  return 0;
}
