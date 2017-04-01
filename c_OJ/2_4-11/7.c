#include<stdio.h>
int main (void) {
  int examples;
  char compute;
  double number_a, number_b;
  scanf("%d",&examples);
  while (examples--) {
    scanf("%lf%lf",&number_a,&number_b);
    getchar();
    compute = getchar();
    if ((compute == 47)&&(number_b == 0)) {
      printf("Error!No result.\n");
    }
    else if (((compute != 43) && (compute != 45) && (compute != 42) && (compute != 47))) {
      printf("Error!No result.\n");
    }
    else {
      if (compute == 43) {
        printf("%.6f+%.6f=%.6f\n",number_a,number_b,number_a+number_b);
      }
      if (compute == '-') {
        printf("%.6f-%.6f=%.6f\n",number_a,number_b,number_a-number_b);
      }
      if (compute == '*') {
        printf("%.6f*%.6f=%.6f\n",number_a,number_b,number_a*number_b);
      }
      if (compute == '/') {
        printf("%.6f/%.6f=%.6f\n",number_a,number_b,number_a/number_b);
      }
    }
  }
  return 0;
}
