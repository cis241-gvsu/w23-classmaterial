#include <stdio.h>
#include <stdlib.h>

double sum(double, double);
void pointerfun(int *);

int main(void) {

    double d1 = 10.0;
    double d2 = 4.5;
    double tot = sum(d1,d2);
    printf("d1 = %f, d2 = %f, sum = %f\n", d1, d2, tot);

    int *p = (int *) malloc(sizeof(int));
    *p = 4;
    printf("p val before = %d\n", *p);
    printf("p before = %p\n", p);
    pointerfun(p);
    printf("p after = %p\n", p);
    printf("p val after = %d\n", *p);

    free(p);
    return 0;
}

double sum(double a, double b) {
    return a+b;
}

void pointerfun(int *p) {
    *p = *p * 2;
    printf("p val in fun = %d\n", *p);
    p = p+1;
    printf("p in fun= %p\n", p);
}
