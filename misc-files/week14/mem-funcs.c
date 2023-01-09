#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    int size = 10;
    int *arr1 = (int *) malloc(sizeof(int)*size);

    memset(arr1, 1, sizeof(int)*size);
    printf("%d\n", *arr1);

    char *s = (char *) malloc(sizeof(char)*2);
    char *s2 = (char *) malloc(sizeof(char)*27);

    // fills s2 with A-Z, null terminated
    for(int i=0; i<26; i++) {
        *(s2+i) = 65 + i;
    }
    *(s2+26) = '\0';
    printf("%s\n", s2);

    memcpy(s, s2, 2);
    printf("%c\n", *s);
    printf("%s\n", s2);

    return 0;
}
