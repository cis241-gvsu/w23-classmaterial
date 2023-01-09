/*
Perform matrix-vector multiplication. This program has several bugs.
*/
#include <stdio.h>
#include <stdlib.h>

int* fill_vec(int* vec, int n) {
    int* filled_vec;
    filled_vec = malloc(sizeof(int)*n);
    for (int i = 0; i < n; i++) {
        filled_vec[i] = 2*i;
    }
    return filled_vec;
}


int main() {
    int *pm = (int *) 4;
    int *pn = (int *) 2;
    int m = *pm;
    int n = *pn;

    // mat is an m x n matrix
    int *out, *vec, *mat;
    out = malloc(sizeof(int)*m);
    vec = malloc(sizeof(int)*n);
    mat = malloc(sizeof(int)*m*n);
    vec = fill_vec(vec, n);
    mat = fill_vec(mat, m*n);

    int sum = 0;
    for (int row = 0; row < n; row++) {
        for (int col = 0; col < m; col++) {
            sum += vec[col]*mat[row*m + col];
        }
    }

    printf("Output vector:\n");
    for (int i = 0; i < m; i++) {
        printf("%d\n", out[i]);
    }

    free(out); free(vec); free(mat);
    return 0;
}
