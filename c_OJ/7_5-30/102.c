/*设计一个含有年、月、日的日期结构类型，输入一个日期，存储在结构变量中。
计算输出该结构变量存储的日期是这一年中的第几天*/

#include <stdio.h>
struct y_m_d {
  int year;
  int month;
  int day;
};

int main (void) {
  int rows;
  scanf("%d",&rows);
  int count = rows;
  struct y_m_d date[rows];
  while (rows --) {
    scanf("%d%d%d",&date[count-rows-1].year,
    &date[count-rows-1].month,&date[count-rows-1].day);
  }
  char days[12] = {31,28,31,30,31,30,31,31,30,31,30,31};

  for (int i = 0; i < count; i++) {
    int ans = 0;
    if (((date[i].year%4 == 0) && ((date[i].year%100) != 0)) || ((date[i].year%400)== 0)) {
      days[1] = 29;
    } else {
      days[1] = 28;
    }
    for (int j = 0 ; j < date[i].month-1 ; j++) {
      ans += days[j];
    }
    ans += date[i].day;
    printf("%d\n",ans);
  }


  return 0;
}
