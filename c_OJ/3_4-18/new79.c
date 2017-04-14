#include <stdio.h>
#include <string.h>

char whichNumber (char * p , int k,int func_length);
int main (void) {
  int length;
  char n[100];
  int position;
  printf("Please input a number and the position:\n");
  while(scanf("%s%d",n,&position) == 2) {
    length = strlen(n);
    whichNumber(n,position,length);
  }
  return 0;
}

char whichNumber (char * p, int k, int func_length) {
  if (k > func_length) {
    printf("-1\n");
  } else {
    printf("%c\n",*(p+func_length-k));
  }
}
