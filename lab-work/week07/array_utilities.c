#include <stdio.h>
#include <stdlib.h>
int find_index(int arr[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key)
            return i;
    }
    return -1; 
}

int* find_pointer(int arr[], int size, int key){
    for (int i=0;i<size;i++){
        if (*(arr+i)==key)
            return arr+i;
    }
    return NULL;
}

int count(int array[], int size, int key){
    int sum =0;
    int *start = array;
    
    array=find_pointer(array,size,key);
    while(array != NULL){
        sum ++;
        array= find_pointer(array+1, size-*start,key);
        start = array;
    }
    return sum;
    }

int count2d(int arr[][3], int rows, int cols, int key){
    int sum =0;
    for (int i=0;i<rows;i++){
        sum=sum+ count(arr[i],cols-1,key);
    }
    return sum;
}
