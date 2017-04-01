//正数相加求平均数
//输入10个整数，输出其中正数的个数和平均值
//０的话循环中使用continue语句的方式处理
//１的话循环中不使用continue语句的方式处理

#include<stdio.h>
int main (void) {
  int rows;
  int choice;
  int counts;
  double ans;
  int number;
  scanf("%d",&rows);
  while(rows--) {
      scanf("%d",&choice);
    //  printf("%dchoice\n",choice);
      if (choice == 0) {
        counts = 0, ans = 0;
        for (int i = 1; i <= 10 ;i++) {
          scanf("%d",&number);
          if (number <= 0) continue;
          counts += 1;
          ans += number;
        }
        if (counts) {
          printf("In \"continue\" way,numbers=%d,average=%.6f\n",counts,ans/counts);
        }
      } else {
        counts = 0, ans = 0;
        for (int i = 1; i <= 10 ;i++) {
          scanf("%d",&number);
          if (number > 0) {
            counts += 1;
            ans += number;
          }
        }
        if (counts) {
          printf("In \"no continue\" way,numbers=%d,average=%.6f\n",counts,ans/counts);
        }
      }

  }
  return 0;
}
