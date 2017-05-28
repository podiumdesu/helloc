/*<pre id="line1">使用链表建立一张班级成绩单，包括每个学生的学号（小于15个字符）、姓名（小于20个字符）、
英语、高等数学、普通物理、C语言程序设计四门课程的成绩（float类型）
，试用函数编程实现下列功能： <span id="line28"></span>
（1）输入每个学生的各项信息。 <span id="line29"></span>
（2）输出每个学生的各项信息。 <span id="line30"></span>
（3）修改指定学生的指定数据项的内容（各课程成绩），并输出修改后每个学生的各项信息。
(4）统计并输出各位同学四门课程的总成绩和平均成绩。 <span id="line32"></span>
（5）按照平均成绩进行升序排序，并输出排序结果。
（请使用交换节点数据域和交换节点指针域两种方法实现，提交时只需使用其中一种）
输入：（1）学生成绩信息。第一行为正整数n，接下来的n行是n个学生的信息，
每个学生的信息依次为 学号 姓名 英语成绩 数学成绩 物理成绩 C语言成绩。
 （2）修改信息。第一行为正整数n，表示有n个信息需要修改，接下来的n行是n个修改信息，
 每个修改信息包含 学号 课程名 新成绩。
 输出：所有的输出，其中学号宽度为15，姓名宽度为20，成绩保留两位小数并且宽度为10
 ，全部左对齐空格补齐 <span id="line36"></span> 每次输出结束后，再追加输出一个空行。
 并且在修改、统计、排序的输出前，加入相应的标识，见样例输出。

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct stu_info {
  char id_no[15];
  char name[20];
  float score[4];
  float avg;
  struct stu_info *next;
}STU_INFO,*pINFO;     //定义结构和结构指针

void swap(char *a ,char *b);
int main (void) {
  int stu_num;
  scanf("%d",&stu_num);    //获取学生人数
  int s_num = stu_num;
  pINFO head, current;     //定义头指针和中间指针
  head = (pINFO)malloc(sizeof(STU_INFO));    //为头指针分配空间
  head->next = NULL;    //将头指针的指针域设置为 空
  current = head;  //将中间指针指向头指针
  while (s_num--) {     //获取输入的学生信息
    current->next = (pINFO)malloc(sizeof(STU_INFO));    //为下一个链表项申请内存
    current = current->next;   //将中间指针指向下一个链表项
    scanf("%s",current->id_no);    //将数据存入链表项的内容域
    scanf("%s",current->name);
    for (int i = 0; i < 4; i++) {
      scanf("%f",&current->score[i]);
    }
    current->next = NULL;     //中间指针的指针域设置为 空
  }

  /**********输出每个学生的各项成绩**********/
  current = head->next;    //重置中间指针的指向

  printf("%-15s%-20s%-10s%-10s%-10s%-10s\n","Id","Name","English","Maths","Physics","C");
  while(current) {   //指针域存在
    printf("%-15s%-20s%-10.2f%-10.2f%-10.2f%-10.2f\n",current->id_no,current->name,current->score[0],current->score[1],current->score[2],current->score[3]);
    current = current->next;
  }
  printf("\n");
  /**********************************/
  /*********修改指定学生的指定数据项的成绩*********/

  int course_num;
  scanf("%d",&course_num);
  int c_num = course_num;
  char change_id[course_num][15];
  char change_course[course_num][10];   //保存需要修改的课程名
  int course_id[course_num];
  float change_score[course_num];   //保存需要修改的成绩
  int change_c = 0;
  while(c_num--){
    scanf("%s%s%f",change_id[change_c],change_course[change_c],&change_score[change_c]);
   //将课程名转换成id
    if (change_course[change_c][0] == 'E') {
      course_id[change_c] = 0;
    } else if (change_course[change_c][0] == 'M') {
      course_id[change_c] = 1;
    } else if (change_course[change_c][0] == 'P') {
      course_id[change_c] = 2;
    } else {
      course_id[change_c] = 3;
    }
    change_c++;
  }
  //上面将需要修改的数据已经存储了。
  current = head->next;
  for (int p = 0; p < course_num; p++) {
    while(current) {
      if(strcmp(current->id_no,change_id[p]) == 0) {
        current->score[course_id[p]] = change_score[p];   //将新分数赋进去
      }
      current = current->next;
    }
    current = head->next;
  }

  current = head->next;
  printf("Alter:\n");
  printf("%-15s%-20s%-10s%-10s%-10s%-10s\n","Id","Name","English","Maths","Physics","C");
  while(current) {
    printf("%-15s%-20s%-10.2f%-10.2f%-10.2f%-10.2f\n",current->id_no,current->name,current->score[0],current->score[1],current->score[2],current->score[3]);
    current = current->next;
  }
  printf("\n");
  /**********************************/
  /**********统计每个学生的平均成绩（两位小数）*********/
  printf("SumAndAvg:\n");
  printf("%-15s%-20s%-10s%-10s\n","Id","Name","SUM","AVG");
  current = head->next;
  double scores[stu_num];
  double scores_all[stu_num];
  int count = 0;
  while(current) {
      scores_all[count] = 0;
      for (int j = 0; j < 4; j++) {
        scores_all[count] += current->score[j];
      }
      scores[count] = scores_all[count] / 4;
      printf("%-15s%-20s%-10.2lf%-10.2lf\n",current->id_no,current->name,scores_all[count],scores[count]);
      count++;
    current = current->next;
  }
  printf("\n");
  /**********************************/
  /****将avg赋进结构体中******/
  current = head->next;
  count = 0;
  while (current) {
    current->avg = scores[count];
    count++;
    current = current->next;
  }

  /**********对成绩进行排序**************/
  for(int i = 0; i < stu_num; i++) {
    current = head;
    while(current->next) {
      if (current->avg > current->next->avg) {
        float temp;
        temp = current->avg;
        current->avg = current->next->avg;
        current->next->avg = temp;
        swap(current->id_no,current->next->id_no);
        swap(current->name,current->next->name);
      }
      current = current->next;
    }
  }
  printf("Sort:\n");
  current = head->next;
  printf("%-15s%-20s%-10s\n","Id","Name","AVG");
  while(current) {
    printf("%-15s%-20s%-10.2f\n",current->id_no,current->name,current->avg);
    current = current->next;
  }
  printf("\n");

  //使用交换节点数据域
  return 0;
}

void swap(char *a ,char *b) {
  char temp[20];
  strcpy(temp,a);
  strcpy(a,b);
  strcpy(b,temp);
}
