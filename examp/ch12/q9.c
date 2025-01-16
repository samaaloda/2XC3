#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

double inner_product(double *a, double *b, int n){
    double *p, *q;
    double sum;
    q=b;
    for(p=a;p<a+n;p++){
        sum+=((*p)*(*q));
        q++;
    }
    return sum;
}

void main(){
    double a[5] = {1, 5, 6,7,78};
    double b[5] = {1, 5, 6,7,78};
    printf("Inner product is %.3lf\n", inner_product(a,b,5));
}