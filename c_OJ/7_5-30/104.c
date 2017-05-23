/*设计一个能够描述上网网址的结构类型struct Web。它包含缩略名、全名、URL，然后构造对应的结构数组，
编程输入你常用的缩略名、全名、网址，并且按照缩略名排序（升序）。
输出排序前后的信息。
输出：输出排序前后的网址信息，排序前的与排序后的用空行隔开。缩略名宽度为20，全名宽度为40，无其它空格。
*/

#include <stdio.h>
#include <string.h>
struct web_info {
  char slug[20];
  char full[40];
  char url[50];
};
void sort (struct web_info * web,int n);
void swap(char * a, char * b);
int main (void) {
  int rows;
  scanf("%d",&rows);
  struct web_info webs[rows];
  int i = 0;
  while (rows--) {
    scanf("%s%s%s",webs[i].slug,webs[i].full,webs[i].url);
    i++;
  }
  for (int j = 0; j < i; j++) {
    printf("%-20s%-40s%s\n",webs[j].slug,webs[j].full,webs[j].url);
  }
  printf("\n");
  sort(&webs[0],i);
  for (int j = 0; j < i; j++) {
    printf("%-20s%-40s%s\n",webs[j].slug,webs[j].full,webs[j].url);
  }
  return 0;
}
void sort (struct web_info *web,int n) {
  //printf("ddd%s",(web+2)->slug);
  for (int k = 0; k < n; k++) {
    for (int j = 0; j < n-k-1; j++) {
      if(strcmp((web+j)->slug,(web+j+1)->slug) > 0) {
        swap((web+j)->slug,(web+j+1)->slug);
        swap((web+j)->full,(web+j+1)->full);
        swap((web+j)->url,(web+j+1)->url);
      }
    }
  }
}
void swap(char * a, char * b) {
  char p[50];
  strcpy(p, a);
  strcpy(a,b);
  strcpy(b,p);
}
