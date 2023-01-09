#include <stdio.h>
#include <stdlib.h>

int main(void) {
    
    int tot;
    int a, b, c;


    // scanf - example of accepting input and outputting
    /*
    scanf("%d %d %d", &a, &b, &c);
    tot = a + b + c;
    printf("you entered: %d %d %d, total = %d\n", a, b, c, tot);
    */



    // scanf - loop
    /*
    int num;
    int sum = 0;
    int ret = EOF + 1;

    while (ret != EOF) {
        printf("current sum = %d\n", sum);
        ret = scanf("%d", &num);
        sum += num;
    }
    */

    // fgets
    /*
    int maxn = 10;
    char *p = (char *) malloc(sizeof(char)*maxn);

    p = fgets(p, maxn, stdin);
    if (p != NULL) {
        printf("you entered %s\n", p);
    }
    free(p);
    */

    


    // getline
    char *s;
    int nread;
    size_t maxn = 10;

    s = (char *) malloc(sizeof(char)*maxn);
    nread = getline(&s, &maxn, stdin);
    printf("you entered %d characters\n", nread);
    printf("you entered %s\n", s);

    free(s);
    return 0;
}
