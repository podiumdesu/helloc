//输入n个学生的姓名和c语言课程成绩，将成绩按从高到低顺序排序，姓名同时作调整，输出排序后的姓名和成绩

#include<stdio.h>
#define SIZE students
int main (void) {
  int students;

  int i;

  while (scanf("%d",&students) != EOF) {
    char name[SIZE][100];
    int score[SIZE];
    for (i = 0; i < students; i++) {
      scanf("%s %d",&name[i],&score[i]);
    }

    for (i = 0; i < students; i++) {
      printf("%s %d",name[i],score[i]);
    }

  }
  return 0;
}
