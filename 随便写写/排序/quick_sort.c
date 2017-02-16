#include <stdio.h>


void quicksort(int left, int right);

int array[200], n;

int main (void) {
    int n, i, array[200];
    printf("Please define the length:\n");
    scanf("%d", &n);
    printf("%d", n);
    for (i = 0; i <n; i++) {
        printf("continue!");
        scanf("%d", &array[i]);
    }
    printf("i got it!\n");

    quicksort(0,n-1);

    for (i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }


}


void quicksort(int left, int right) {
    int key, i, j;
    int change_left, change_right;
    i = left;
    j = right;

    key = array[left];
    while (i != j && i < j) {

        while (key < array[i]) {
            i++;
        }
        while (key > array[j]) {
            j--;
        }
        array[i] ^= array[j];
        array[j] ^= array[i];
        array[i] ^= array[j];
    }
    array[i] = key;


    quicksort(left, i - 1);
    quicksort(i + 1, right);
}
