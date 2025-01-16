#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>


void printArr(bool* arr, int size){
    for(int i=0;i<size;i++){
        printf("%d\n",*(arr+i));
    }
}

int main(){
    bool* arr=malloc(7*sizeof(bool));
    *(arr+0)=true;
    for(int i=1;i<6;i++)
        *(arr+i)=false;
    *(arr+6)=true;
    printArr(arr, 7);
    }