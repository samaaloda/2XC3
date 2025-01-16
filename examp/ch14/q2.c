#include <stdlib.h>
#include <stdio.h>

#define NELEMS(a) (sizeof(a)/sizeof(int))

void main(){
    int arr[]={1,2,4,5};
    printf("Size of array %ld\n", NELEMS(arr));
}