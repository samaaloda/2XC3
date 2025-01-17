/*
Sama Al-Oda, 400531762, November 21st 2024
datap.c program that has multiple methods that can manage data. 
*/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include "datap.h"

/* read_data
* Arguments:
*   int *col : a pointer referring to the integer value of number of columns
*   int *row : a pointer referring to the integer value of number of rows
* Fucntion:
*   This functions reads the data using the scanf() method. It then stored the data into the float* pointer, arr.
* Return value:
*   Return value is a float* pointer that returns the address of the array stored
*/
float *read_data(int* col, int *row){ 
    int result=scanf("%d %d\n",row, col);
    if (result != 2){//ensures that row and column values are proper 
        printf("Error: Invalid dimensions given.\n");
        return NULL;
    }
    float *arr = malloc((*row)*(*col)*sizeof(float));
    if (arr == NULL) {//ensures memory allocation succeeded
        printf("Error: Memory allocation failed.\n");
        return NULL;
    }
    for(int i=0; i < *row;i++){
        for(int j=0;j< *col;j++){
            float num;
            int result=scanf("%f",&num);
            *(arr+i*(*col)+j)=num; 
        }
    }
    return arr;
}

/* clean_data
* Arguments:
*   float *arr: a pointer referring to the address of the array stored.
*   int *col : a pointer referring to the integer value of number of columns
*   int *row : a pointer referring to the integer value of number of rows
* Fucntion:
*   This functions makes a new float pointer, newarr, that stores the address of a new array that only has the rows of the data that 
*   do not contain nan as a value in any of the column
* Return value:
*   Return value is a float* pointer that returns the address of the new array stored, after deleting rows that are unviable. 
*/
float *clean_delete(float *arr, int* col, int* row){
    float* newarr=NULL;
    int rows=0;
        for(int i=0;i<*row;i++){
            if(allNum((arr + i*(*col)),*col)){
                newarr=realloc(newarr, (rows+1)*(*col)*sizeof(float));
                if (arr == NULL) {
                    fprintf(stderr, "Memory allocation failed.\n");
                    return NULL;
                }
                for (int j=0;j<*col;j++)
                    *(newarr+rows*(*col)+j)=*(arr+(*col)*i+j);
                rows++;
        }
    }
    *row=rows;
    return newarr;
}

/* allNum
* Arguments:
*   float *arr: a pointer referring to the address of the array stored.
*   int size: an integer containing the size of the array
* Fucntion:
*   This functions checks if the pointer array, arr, given has a nan value in any of its stored items within the required size.
* Return value:
*   Return value is a boolean value that represents whether the arr given is all numbers or not. 
*/
bool allNum(float* arr, int size){
    for(int i=0;i<size;i++){
        if(isnan(*(arr+i)))
            return false;
    }
    return true;
}

/* add_avg
* Arguments:
*   float *arr: a pointer referring to the address of the array stored.
*   int index: an integer containing the index of the array.
*   int size: an integer containing the size of the array
* Fucntion:
*   This functions checks if the index in the array, row, with size of size, is a number or not. If it is, it will return it as a number. 
*   Otherwise, it will return the average of the row. 
* Return value:
*   Return value is a float that represents either the data at the index, or the average of the row. 
*/
float add_avg(float* row, int index,int size){
    if(!isnan(*(row+index)))
        return *(row+index);
    float sum=0;
    for(int i=0;i<size;i++){
        if(!isnan(*(row+i)))
            sum+= *(row+i);
    }
    if(sum==0)
        return 0;
    return (sum/((float)size));
}

/* clean_impute
* Arguments:
*   float *arr: a pointer referring to the address of the array stored.
*   int* col: an integer pointer that refers to the columns of the array, arr.
*   int* row: an integer pointer that refers to the rows of the array, arr.
* Fucntion:
*   This functions returns the array, arr, by replacing any nan values in the array to the average of the row. 
* Return value:
*   Return value is a float pointer that represents the new array, newarr, after going through the management. 
*/
float *clean_impute(float *arr, int* col, int* row){
    float* newarr=malloc((*row)*(*col)*sizeof(float));
    if (newarr==NULL){ //ensures memory allocation succeeded
        printf("Error: Memory allocation failed.\n");
        return NULL;
    }
    int rows=0;
        for(int i=0;i<*row;i++){
            for (int j=0;j<*col;j++)
                *(newarr+rows*(*col)+j)=add_avg(arr+(*col)*i,j, *col);
            rows++;
    }
    *row=rows;
    return newarr;
}

/* output_data
* Arguments:
*   float *arr: a pointer referring to the address of the array stored.
*   int* col: an integer pointer that refers to the columns of the array, arr.
*   int* row: an integer pointer that refers to the rows of the array, arr.
* Fucntion:
*   This functions prints the number of rows and columns, respectively. Then, it prints all the contents of the 2D array, arr, with spaces in between. 
*   Every new row is printed on a new line. 
* Return value:
*   This function does not have a return value.
*/
int output_data(float *arr,int* col, int* row){
    printf("%d %d\n", *row, *col);
    for(int i=0;i<*row;i++){
        for(int j=0;j<*col;j++)
            printf("%.3f ",*(arr+(i*(*col))+j));
        printf("\n");
    }
}
    
