//
// Created by petnakanojo on 17-4-24.
//

//输入n个学生的姓名和c语言课程成绩，将成绩按从高到低顺序排序，姓名同时作调整，输出排序后的姓名和成绩

#include <stdio.h>
#include <ctype.h>

int main (void) {
  char temp;
  int c[12] = {0};
  int num;
  temp = getchar();

  while (temp != '#') {
    //printf("%c",temp);
    if (((temp>='a') && (temp<='z')) || ((temp>='A') && (temp<='Z'))) {
      //printf("dsdfaf");
      c[10] ++;
    } else if ((temp >= '0') && (temp <= '9')) {
      num = temp - '0'; //这里要注意啊！！！！
      //  printf("%d",num);
      c[num] ++;
    } else {
      c[11] ++;
    }
    temp = getchar();
  }
  for (int i = 0;i <= 9; i++) {
    printf("Number %d: %d\n",i,c[i]);
  }
  printf("characters: %d\n",c[10]);
  printf("other: %d\n",c[11]);

  return 0;
}
