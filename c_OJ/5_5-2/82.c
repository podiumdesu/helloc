//n个人围成一圈，从1到n报数。凡是报数为3的人退出圈子。输出最后留下的人的编号

#include <stdio.h>
#define SIZE 3
int fun (int n, int m);
int main (void) {
  int num;
  while (scanf("%d",&num) != EOF) {
    printf("%d\n",fun(num,SIZE));
  }
  return 0;
}



int fun (int n, int m){
  int r,result;
  r = 0;
  for (int i = 2; i <= n; i++) {
    result = (r + m) % i;
    r = result;
  }
  return result+1;
}
