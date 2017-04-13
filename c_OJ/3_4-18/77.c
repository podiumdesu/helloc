//计算题
//编程计算s=1+1/2！+1/3！+...+1/n! n由终端输入，将n！定义成函数

//n在1-20之间（闭区间），遇到文件尾测试结束
//输出s和n!，s保留12位小数

#include <stdio.h>
unsigned long long factorial (int n) ;
int main (void) {
  int number;
  double result;
  while(scanf("%d",&number) != EOF) {
    result = 0.0;
    for (int i = 1 ; i <= number; i++) {
      result = result + (1.0 / factorial(i));
    }
    printf("%.12lf %llu\n",result,factorial(number));
  }
  return 0;
}

unsigned long long factorial (int n) {
  unsigned long long ans;
  ans = 1;
  for (int i = 1; i <= n; i++) {
    ans *= i;
  }
  return ans;
}
