//一年中的第几天
//输入一个日期（年，月，日），计算并输出该日期是这一年的第几天

//输入格式说明：每组测试数据输入占一行，包含三个正整数，分别代表年，月，日
//输出格式说明：每组测试样例的输出结果占一行



//本题编写的时候请先上网google一下闰年的定义．

#include<stdio.h>
int main (void) {
  int i;
  int year, month, day;
  char days[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
  while (scanf("%d%d%d",&year,&month,&day) != EOF) {
    int ans = 0;
    if ((year%4 == 0) && ((year%100) != 0) || ((year%400)== 0)) {
      days[1] = 29;
    } else {
      days[1] = 28;
    }
    for (i = 0 ; i < month-1 ; i++) {
      ans += days[i];
    }
    ans += day;
    printf("该日期是这一年中的第%d天\n",ans);
  }
  return 0;
}
