//输入n个学生的姓名和c语言课程成绩，将成绩按从高到低顺序排序，姓名同时作调整，输出排序后的姓名和成绩

#include<stdio.h>
#define SIZE students
int main (void) {
  int students;

  int i;
  int rank[100];

  while (scanf("%d",&students) != EOF) {
    char name[SIZE][50];
    int score[SIZE];
    for (i = 0; i < students; i++) {
      scanf("%s %d\n",&name[i],&score[i]);
    }


  }
  return 0;
}

for (int i = 0; i < size; i++) {
  for (int j = i+1; j < size - i; j--) {
    if (score[j-1]<score[j]) {
      swap(score[j-1],score[j]);
    }
  }
}

void swap (int * p1, int * p2) {
  int temp;
  temp = *p1;
  *p1 = *p2;
  *p2 = temp;
}
