#include <stdio.h>

int main(void) {
    /*
    int *iptr;
    char *cptr;
    float *fptr;
    */

    int a = 5;
    int b = 6;
    int c;
    int *iptr;
    int *jptr;

    //*jptr = 80; //this is bad!

    printf("iptr before initializing = %p\n", iptr);
    printf("jptr before initializing = %p\n", jptr);

    jptr = &a;
    iptr = &c;

    *iptr = 100;

    printf("iptr = %p\n", iptr);
    printf("value at iptr = %d\n", *iptr);
    printf("jptr = %p\n", jptr);
    printf("value at jptr = %d\n", *jptr);

    printf("address of b = %p\n", &b);
    printf("b = %d\n", b);

    return 0;
}
