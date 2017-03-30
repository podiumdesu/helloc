#include<stdio.h>

int main (void) {
  double ans = 0.0;
  int change = 1;
  double daan = 0.78540316325;
  for (double i = 1.0; ((1.0 / i) > (1.0e-4)); i = i + 2.0) {
    if (change > 0) {
      ans = ans + (1.0 / i);
      change = -1;
    } else {
      ans = ans - (1.0 / i);
      change = 1;
    }
  }
  printf("%.9lf\n",daan * 4);
  return 0;
}
