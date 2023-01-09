#include <stdio.h>
#include <stdlib.h>

int main(void) {

    // 1D Array Recap
    int arr[7] = {1,2,3,4,5,6,7};
    // standard [] notation
    printf("arr[0] = %d, arr[1] = %d\n", arr[0], arr[1]);
    // pointer notation
    printf("arr = %p, *arr = %d, arr+1 = %p, *(arr+1) = %d\n", arr, *arr, arr+1, *(arr+1));

    // 2D array o
    int mat[3][4] = {{1,3,4,8},{10,9,7,2},{5,6,11,12}};

    printf("mat[2][3] = %d\n", mat[2][3]);

    int *pm;
    pm = &mat[0][0];
    printf("pm = %p, mat = %p, mat[0] = %p\n", pm, mat, mat[0]);
    printf("mat[1] = %p, &mat[1] = %p mat+1 = %p *(mat+i) = %p\n", mat[1], &mat[1], mat+1, *(mat+1));
    
    // pointer arithmetic to access columns
    printf("*(mat[2] + 3) = %d\n", *(mat[2]+3));
    printf("*(*(mat+2) + 3) = %d\n", *(*(mat+2)+3));
    
    // careful: not the same thing
    // kept advancing by rows
    printf("*((mat+2) +3) = %d\n", *((mat+2)+3)); 
    return 0;
}
