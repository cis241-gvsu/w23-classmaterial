#include <stdio.h>

int main(void) {

    int arr1[10];
    int arr0[3] = {2,4,5};

    char arr2[4];
    char arr3[] = "hello";

    int i;

    for(i=0; i<10; i++) {
        arr1[i] = 0;
    }

    int num = 1;
    while (num < 300) {
        printf("num = %d\n", num);
        num *= 2;
    }

    return 0;
}
