#include <stdio.h>
int main (void) {
    int ref[] = { 8 , 4 , 0 ,2};
    int *ptr;
    int index;

    for (index = 0, ptr = ref; index < 4; index ++ ,ptr ++) {
        printf("%d %d\n",ref[index],*ptr);
    }
    return 0;
}

//2. ref有4个元素
//3. reg的地址是%p看一下就行了，ref+1指的是ref[1]的地址，++ref指的是ref后面的地址

