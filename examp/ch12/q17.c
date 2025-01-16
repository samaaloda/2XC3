#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#define LEN 3
int sum_two_dimensional_array(int a[][LEN], int n){
    int sum=0;
    int *p=*a;
    while(p<*a+LEN*n){
        sum+=*p;
        p++;
    }
    return sum;
}

void main(){
    int a[3][LEN]={{1,2,3},{4,5,6},{3,6,7}};
    printf("The sum of the 2D array is %d\n", sum_two_dimensional_array(a, 3));
}