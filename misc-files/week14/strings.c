#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    char s2[] = "hello darkness my old friend";

    char *s3 = (char *) malloc(sizeof(char)*10);

    int sn = 5;
    char *s = (char *) malloc(sizeof(char)*sn);
    *s = 'y';
    *(s+1) = 'o';
    *(s+2) = 'd';
    *(s+3) = 'a';
    *(s+4) = '\0';
    // bad - walks off end, demnonstrates issue with strlen
    /*
    *(s+4) = 'b';
    *(s+5) = 'a';
    *(s+6) = '\0';
    */

    printf("%s\n", s);

    //Unsafe
    /*
    strcpy(s3, s2);
    printf("%s\n", s3);
    printf("%s\n", s);
    */

    // Safe
    strncpy(s3, s2, 9);
    printf("%s\n", s3);
    printf("%s\n", s);

    int n = strlen(s);
    printf("%d\n", n);
    n = strnlen(s, sn);
    printf("%d\n", n);

    char *member = strchr(s2, 'l');
    printf("%p, %p\n", s2, member);


    return 0;
}
