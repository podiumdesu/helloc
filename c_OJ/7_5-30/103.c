/*设有结构类型声明struct Student{int num;char name[19]; double score;};
num、name、score分别是学号、姓名、成绩。请编程完成下列任务：
（1）定义有3个元素的结构数组s并根据输入对其进行初始化，同时定义结构指针p并使其指向s[0]；
（2）不用指针p，依次输出各个元素的各成员之值；
（3）用指针p，依次输出各个元素的各成员之值(学号与姓名之间用tab符隔开，姓名输出宽度为20，左对齐)。

*/

#include <stdio.h>
struct Student {
  int num;
  char name[19];
  double score;
};
int main (void) {
  int rows;

  scanf("%d",&rows);
  struct Student stu_info[3];
  while (rows--) {
    for (int j = 0; j < 3; j++) {
      scanf("%d %s %lf",&stu_info[j].num, stu_info[j].name,&stu_info[j].score);
    }
    /*不用指针p，依次输出各个元素的各成员之值*/
    for (int j = 0; j < 3; j++) {
      printf("%d\t%-20s%lf\n",stu_info[j].num, stu_info[j].name, stu_info[j].score);
    }
    /*用指针p，依次输出各个元素的各成员之值*/
    struct Student *p;
    p = &stu_info[0];
    for (int k = 0; k < 3; k++) {
      printf("%d\t%-20s%lf\n",(p+k)->num,(p+k)->name,(p+k)->score);
    }
  }
  return 0;
}
