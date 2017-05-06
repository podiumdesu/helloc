#include <stdio.h>
int main (void) {
  int (*ptr)[3];
  int a[2][3] = {1,2,3,4,5,6};
  int new[2][3];
  ptr = a;
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 3; j++) {
      new[i][j] = *(*(ptr+i)+j) ;
    }
  }
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 3; j++) {
      printf("%d",new[i][j]);
    }
    printf("\n");
  }
  return 0;
}
