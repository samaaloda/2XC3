#include <stdlib.h>
#include <stdio.h>

void swap(int *p, int *q){
    int p_value=*p;
    //p=q;
    *p=*q;
    *q=p_value;
}

int main(){
    int p,q;
    printf("Enter the numbers: ");
    scanf("%d %d",&p, &q);
    swap(&p, &q);
    printf("p and q now %d %d\n", p, q);
}