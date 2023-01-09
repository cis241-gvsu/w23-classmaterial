#include <stdio.h>
#include <stdlib.h>

int main(void) {

    // don't have the right to memory it points to yet
    int *p;
    printf("p before malloc = %p\n", p);
    
    // malloc - asks for memory for single int
    p = (int *) malloc(sizeof(int));
    
    printf("p after malloc = %p\n", p);
    printf("value at p before setting = %d\n", *p);
    *p = 10; // changes value stored at emmory
    printf("value at p after setting = %d\n", *p);

    // malloc - asking for memory for many ints
    int *p3 = (int *) malloc(sizeof(int)*10);
    printf("p3 after malloc = %p\n", p3);

    // calloc - initialized to 0
    int *p2;
    p2 = (int *) calloc(100, sizeof(int));
    printf("p2 after calloc = %p\n", p2);
    printf("value at p2 before setting = %d\n", *p2);
    *p2 = 80;
    printf("value at p2 after setting = %d\n", *p2);

    char *pc;
    pc = (char *) malloc(20*sizeof(char));
    printf("pc after malloc = %p\n", pc);

    // realloc - try with 12 to see difference
    p3 = (int *) realloc(p3, sizeof(int)*1000);
    printf("p3 after realloc = %p\n", p3);

    // can't forget to free!
    free(p);
    free(p2);
    free(p3);
    free(pc);

    return 0;
}
