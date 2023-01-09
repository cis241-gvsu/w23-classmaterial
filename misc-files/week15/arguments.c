#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    float sum = 0;
    for (int i=1; i<argc; i++) {
        sum += atoi(argv[i]);
    }
    printf("%f\n", sum/(argc-1));
    return 0;
}
