#include <stdio.h>
#include <stdlib.h>


// typical way
typedef struct Coord {
    double x;
    double y;
    int *list;
} Coord;


/*
// define coord struct
struct Coord {
    double x;
    double y;
};

// after the fact typedef
typedef struct Coord Coord;
*/

int main(void) {
    int a;
    Coord c;
    c.x = 10;
    c.y = 5;
    c.list = (int *) malloc(sizeof(int)*5);

    printf("(%f,%f)\n", c.x, c.y);
  
    Coord *cp;
    cp = (Coord *) malloc(sizeof(Coord));
    cp->x = 12;
    cp->y = 8;
    cp->list = (int *) malloc(sizeof(int)*5);
    //(*cp).x = 12;
    //(*cp).y = 8;

    printf("(%f,%f)\n", cp->x, cp->y);
    
    free(c.list);
    free(cp->list);
    free(cp);
    return 0;
}
