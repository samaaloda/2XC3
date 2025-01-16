#include <stdlib.h>
#include <stdio.h>

int *create_array(int n, int initial_value){
    int * arr=malloc(n*sizeof(int));
    if(!arr)
        return NULL;
    for(int i=0;i<n;i++){
        *(arr+i)=initial_value;
    }
    return arr;
}

void main(){
    int* arr= create_array(4,5);
    for(int i=0;i<4;i++){
        printf("%d ", *(arr+i));
    }
    printf("\n");
}
