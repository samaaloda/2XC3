#include <stdlib.h>
#include <stdio.h>

int sum_array( int a[], int n){
    int sum=0;
    int *p;
    for(p=a;p<a+n;p++){
        sum+=*p;
    }
    return sum;
}

void main(){
    int a[5] = {1, 5, 6,7,78};
    printf("The sum is %d\n",sum_array(a,5));
}