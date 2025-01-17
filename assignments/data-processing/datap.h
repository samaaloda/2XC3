/*
Sama Al-Oda, 400531762, November 7th 2024
This file has all he prototypes of the functions in datap.c and userIn.c
*/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>



float *read_data(int* col, int *row);
float *clean_delete(float *arr, int *row, int* col);
bool allNum(float* arr, int size);
float find_avg(float* arr, int size);
float *clean_impute(float *arr,int* col, int* row);
int output_data(float *arr,int* col, int* row);
void usage();
void userInput(int argc,char* argv[]);