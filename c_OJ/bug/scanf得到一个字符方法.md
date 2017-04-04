这个真的是坑啊，前几天c语言oj上的一道＂简易计算器＂的题目，陆dalao问我为什么他的程序过不了．
因为我自己已经写完了，当时我是使用的getchar()获取字符，而他用的是scanf．然后我就尝试帮他debug．
直到半夜一点半我还是没有找到错误，反而我自己又写的两个test一直在疯狂报错．

```c
#include<stdio.h>
#include<stdlib.h>
int main (void) {
  double a,b,c;
  int i,n;
  char s;
  scanf("%d",&n);
//  if (n>0) {
    for (int i = 1;i<=n;i++) {
      printf("ddd%d\n",i);
      scanf("%lf%lf%s",&a,&b,&s);
      switch (s) {
        case '+':c = a+b;/* value */
        printf("%f",c);break;
        //② case 后的表达式是可以求得整型量或字符型量的常量表达式。常量表达式中不允
//许包含有变量和函数调用。
        case '-':c = a-b;break;
        case '*':c = a*b;break;
        default: printf("Error\n");
      }
      printf("%.6f%c%.6f=%.6f\n",a,sss,b,c);
          printf("qreqr%d",n);
    }
    printf("%d",n);
//  } else {
//    printf("Error!\n");
//  }
  return 0;
}

```
第二天问了小哥哥，他跟我说有可能是因为`scanf("%s",&s)`导致读入了一个`\0`（字符串结尾），然后不知道赋值给了哪个地址，所以程序可能会出错，他告诉我可以用`scanf("%s",s[0])`，这样就可以读取到第一个字符了。

这跟我自己写的getchar()获取回车符／空格符，然后再用`s = getchar()`获取到字符一样的奇技淫巧，不过也算是解决这个问题了，下面是修改后的程序。

各种scanf和printf都写的比较奇怪，忽视就好了

```c
#include<stdio.h>
#include<stdlib.h>
int main (void) {
  double a,b,c;
  int i,n;
  char s[2];
  char sss;
  scanf("%d",&n);
//  if (n>0) {
    for (int i = 1;i<=n;i++) {
      printf("ddd%d\n",i);
      scanf("%lf%lf%s",&a,&b,s);
      sss = s[0];
      switch (sss) {
        case '+':c = a+b;/* value */
        printf("%f",c);break;
        //② case 后的表达式是可以求得整型量或字符型量的常量表达式。常量表达式中不允
//许包含有变量和函数调用。
        case '-':c = a-b;break;
        case '*':c = a*b;break;
        default: printf("Error\n");
      }
      printf("%.6f%c%.6f=%.6f\n",a,sss,b,c);
          printf("qreqr%d",n);
    }
    printf("%d",n);
//  } else {
//    printf("Error!\n");
//  }
  return 0;
}
```
