//输入n个学生的姓名和c语言课程成绩，将成绩按从高到低顺序排序，姓名同时作调整，输出排序后的姓名和成绩
#include <stdio.h>
#include <string.h>
void swap (int * p1 , int * p2);


int main (void) {
 // printf("zlc zz\n");
  int SIZE;
  int score[100];


  while(scanf("%d",&SIZE) != EOF) {
  char name[SIZE][30];
      for (int k = 0; k < SIZE; k++){
        scanf("%s %d",&name[k],&score[k]);
      }

  for (int i = 0; i < SIZE ; i++) {
    for (int j = 1; j < SIZE - i; j++) {
      if (score[j-1] < score[j]){
        swap(&score[j-1],&score[j]);
        char paste[30];
        strcpy(paste,name[j-1]);   //交换成绩的同时交换姓名
        strcpy(name[j-1],name[j]);
        strcpy(name[j],paste);
      }
    }
  }
  printf("\n");
  for (int m = 0 ; m < SIZE; m++) {
    printf("%s %d\n",name[m],score[m]);
  }
  printf("\n");
}


return 0;
}

void swap (int * p1, int * p2) {
  int temp;
  temp = *p1;
  *p1 = *p2;
  *p2 = temp;
}
