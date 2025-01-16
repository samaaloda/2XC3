#include <stdlib.h>
#include <stdio.h>

void avg_sum(double a[], int n, double *avg, double *sum){
    *sum=0.0;
    for(int i=0;i<n;i++)
        *sum+=a[i];
    *avg=*sum/n;
}

int main(){
    double a[3]={1.4,5,6.9};
    double avg, sum;
    avg_sum(a, 3, &avg, &sum);
    printf("%.3lf %.3lf\n", sum, avg);
}