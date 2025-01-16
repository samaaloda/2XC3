#include <stdio.h>
#include <stdlib.h>

long hailstone (long an){
    if (an ==0 || an<0){
        printf("Invalid parameters. Please put in a positive long integer greater than 0.\n");
        return 0;
    }
    printf("%ld ", an);
    if (an ==1){
        printf("\n");
        return 1;
    }
    else if(an%2==0)
        return hailstone(an/2);
    else
        hailstone(3*an +1);
}

int main(){
    long n = 4;
    hailstone(n);
}