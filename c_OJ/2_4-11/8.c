//输入ABC三个学生的考试分数，输出分数居中的那个学生的名字．
//输入：第一行为整数N，表示有N组输入，接下来每行包括三个单精度浮点数（float），不会用相同分数
//输出：每行输入对应一行输出，输出的分数保留一位小数．　　名字：分数

#include<stdio.h>
int main (void) {
  int rows;
  float grade_a, grade_b, grade_c;
  scanf("%d",&rows);
  while (scanf("%f%f%f",&grade_a,&grade_b,&grade_c) == 3) {
    if (grade_a > grade_b) {
      if (grade_b > grade_c) {
        printf("B:%.1f\n",grade_b);
      } else {
        if (grade_a > grade_c) {
          printf("C:%.1f\n",grade_c);
        } else {
          printf("A:%.1f\n",grade_a);
        }
      }
    } else {
      if (grade_c > grade_b) {
        printf("B:%.1f\n",grade_b);
      } else {
        if (grade_c > grade_a) {
          printf("C:%.1f\n",grade_c);
        } else {
          printf("A:%.1f\n",grade_a);
        }
      }
    }
  }
  return 0;
}
