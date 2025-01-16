#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

bool search(int a[], int n, int key){
    int *p;
    for(p=a;p<a+n;p++){
        if(*p==key)
            return true;
    }
    return false;
}

void main(){
    int a[5] = {1, 5, 6,7,78};
    printf("5 is in the array: %d\n", search(a,5,5));
    printf("-7 is in the array %d\n", search(a,5,-7));
}