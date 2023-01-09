#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int nrows = 3;
    int ncols = 4;

    // Option 1
    int *mat = (int *) malloc(nrows*ncols*sizeof(int));
    for (int i=0; i<nrows*ncols; i++) {
        *(mat+i) = i;
    }
    printf("mat[1] = %d\n", mat[1]);
    //mat[1][2] //can't do this
    // Important conversion from 2d to 1d index
    printf("mat[1][2] = %d\n", *(mat+1*ncols + 2));

    // Option 2
    int **mat = (int **) malloc(nrows*size(int *));
    for (int i=0; i<nrows; i++) {
        *(mat+i) = (int *) malloc(ncols*sizeof(int));
    }


    return 0;
}
