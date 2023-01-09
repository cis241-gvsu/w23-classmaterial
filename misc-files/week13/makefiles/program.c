#include <stdio.h>
#include <stdlib.h>
#include "sum.h"

int main(void) {
    int a = 4;
    int b = 5;
    int res;

    res = sum(a, b);
    printf("a = %d, b = %d, sum = %d\n", a, b, res);

    return 0;
}


