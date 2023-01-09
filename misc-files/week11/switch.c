#include <stdio.h>
#include <stdlib.h>

int main(void) {

    char c = '+';
    int x = 4;

    printf("x = %d\n", x);
    switch(c) {
        case '+':
            x++;
            // need to break or it falls into everything after
            break;
        case '-':
            x--;
            // need to break or it falls into everything after
            break;
        default:
            x *= 2;
    }
    printf("x = %d\n", x);
    
    return 0;
}
