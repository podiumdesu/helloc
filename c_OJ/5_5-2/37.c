#include <stdio.h>
int main (void) {
  int rows;
  int number;
  char t[1000];
  char c;
  scanf("%d",&rows);
  getchar();
  while (rows--) {
    while(fgets(t,1000,stdin) != NULL) {
      //printf("%s",t);
      //printf("%c",t[2]);
      scanf("%d",&number);
      getchar();
      t[number] = '\0';
      printf("%s",t);
      printf("\n");
    }
  }
  return 0;
}
