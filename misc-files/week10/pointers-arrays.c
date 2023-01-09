#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int arr[10]; // on the stack
    for (int i=0; i<10; i++) {
        arr[i] = i;
    }

    // array name is just pointer
    printf("&arr[0] = %p\n", &arr[0]);
    printf("arr = %p\n", arr);
    printf("arr+1 = %p\n", arr+1);

    // indexing vs pointer arithmetic notation
    arr[2] = 80;
    printf("arr[2] = %d\n", arr[2]);
    *(arr+2) = 90;
    printf("arr[2] = %d\n", arr[2]);

    int *p1 = (int *) malloc(sizeof(int)*7);
    int *p2 = (int *) malloc(sizeof(int)*7);

    *(p1+1) = 80;
    for (int i=0; i<7; i++) {
        p2[i] = i; //array access notation
        *(p1+i) = i; // pointer arithmetic notation
    }
    printf("*(p1+5) = %d\n", *(p1+5));
    printf("*(p2+5) = %d\n", *(p2+5));
    
    // walking off the end -- BAD, DON'T DO THIS!
    printf("p1 = %p\n", p1);
    printf("p2 = %p\n", p2);
    printf("p1+9 = %p\n", p1+9);
    *(p1+9) = 800;
    printf("*(p2+1) = %d\n", *(p2+1));
    printf("p2+1 = %p\n", p2+1);
    return 0;
}
