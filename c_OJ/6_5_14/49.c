//编写程序实现对多个字符串的连接
//每组输入从一个整数n开始，接下来的n行是n个需要连接的字符串，当n为0时，程序结束运行

#include <stdio.h>
int main (void) {
  int size;
  while(scanf("%d",&size) == 1 && (size != 0)) {
    getchar();
    char str[size][100];
    char result[10000] = {'\0'};
    for (int i = 0; i < size; i++) {
      fgets(str[i],100,stdin);  //使用fgets读取字符时会读入回车符，之后取消判断
    }
    char *resultP = result;   //使用另一个数组存放结果，使用指针指向
    for (int i = 0; i < size; i++) {
      int j = 0;
      while (*(*(str+i)+j) && (*(*(str+i)+j) != '\n') ) {
        //判断此处是否有字符并判断是否是回车符
        *resultP = *(*(str+i)+j);   //赋值
        resultP++;   //递增指针
        j++;
      }
    }
    *resultP = '\0';  //在末尾加上结束标示符
    printf("%s\n",result);
     //此处不可以printf *resultP，因为resultP位置已经移动过了
  }
  return 0;
}
