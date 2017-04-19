//宏定义求三角形面积
#include <stdio.h>
#include <math.h>

#define COMPUTE_S(a,b,c) ((a+b+c)/2)
#define AREA(s,a,b,c) (sqrt((s*(s-a)*(s-b)*(s-c))))

int main (void) {
  int a,b,c;
  int s;
  double area;
  while (scanf("%d%d%d",&a,&b,&c) != EOF) {
    s = COMPUTE_S(a,b,c);
    area = AREA(s,a,b,c);
    printf("%d %.6f\n",s,area);
  }
  return 0;
}
