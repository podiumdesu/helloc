#include<stdio.h>
#define eps 1e-8
int main (void) {
  double ans = 0.0;
  int change = 1;
  for (double i = 1.0; ((1.0 / i) > (1.0e-5)); i = i + 2.0) {
    if (change > 0) {
      ans = ans + (1.0 / i);
      change = -1;
    } else {
      ans = ans - (1.0 / i);
      change = 1;
    }
  }
  printf("%.9lf\n",ans * 4);
  return 0;
}
