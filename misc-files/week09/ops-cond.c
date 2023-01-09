#include <stdio.h>
#include <stdbool.h>
int main(void) {
    // Booleans
    bool b = true;
    bool b2 = 0;
    bool eq = (b==b2);
    printf("%d\n", eq);

    // Implicit type conversion
    int x = 70.0;
    double y = 1000.0/2;
    char c = 65;
    printf("x = %d, y = %f\n", x, y);
    printf("char = %c\n", c);
    printf("y casted to int = %d\n", (int)y);
    printf("x converted to char = %c\n", (char)x);

    // Operators
    x *= 2;
    printf("x = %d\n", x);

    // Conditionals
    if (x > y) {
        printf("x is greater\n");
    }
    else if (x < y) {
        printf("x is less\n");
    }
    else {
        printf("they are equal\n");
    }

    // Ternary operator
    double z = x>y ? x : y;
    printf("%f\n", z);

    return 0;
}
