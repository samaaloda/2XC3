#include <stdlib.h>
#include <stdio.h>

#define CUBE(x) (x)*(x)*(x)
#define REM(n) ((n)%4)
#define PROD(x,y) (((x)*(y)<100) )

void main(){
    printf("Cube of 3 %d\n", CUBE(3));
    printf("Remainder of 5 by 4 %d\n", REM(5));
    printf("Product of 3*-100 %d\n", PROD(3,-100));
}
