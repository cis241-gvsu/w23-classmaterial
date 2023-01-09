#include <stdio.h>
int main(void) {
    int x = 5;
    long l = 134903;
    long long ll = 390839829902920993;
    float f = 837.89;
    double num = 89481231.0990208;
    char c = 'h';
    char s[] = "hello";

    printf("hello world\n");
    printf("my int = %-5d\n", x);
    printf("%20.3f %15.2e %g\n", num, num, num);
    printf("my char = %c\n", c);
    printf("my msg = %s\n", s);
    return 0;
}
