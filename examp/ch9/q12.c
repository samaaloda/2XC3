#include <stdlib.n>
#include <stdio.h>

double inner_product(double a[], double b[], int n){
    double sum;
    for(int i=0;i<n;i++){
        sum+=(a[i]*b[i]);
    }
    return sum;
}