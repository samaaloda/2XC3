/*
Sama Al-Oda, 400531762, November 21st 2024
userIn.c program that calls on methods on datap.c depending on user input. 
*/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include "datap.h"

/* help
*
* This function prints to stdout the a manual to aid the user to utilize this program.
* There is no return value
*/
void help(){
    usage();
    printf("This program outputs the cleaned data, which refers to changing unviable numbers to the average of the row.\n");
    printf("\t-d\t\tdeletes any unviable rows, that is any rows with nan values.");
    printf("\t--help\t\tdisplays this help and exit.");
    printf("\n");
    printf("Examples:\n");
    printf("\tclean\t\treplaces nan values from standard input with the average of the row, and outputs to standard output\n");
    printf("\tclean -d\t\tdeletes rows with nan values from standard input, and outputs to standard output\n");
}
/* usage
*
* This function prints to standard output the usage of this program for the user to follow.
* There is no return value
*/
void usage(){
    printf("Usage: clean [-d]\n");
}

/* userInput
*
* argc of type int: takes in number of arguments
* argv of type char*[]: takes in each of these arguments seperately
* This function calls in all other functions based on arguments provided
*/
void userInput(int argc,char* argv[]){
    int col;
    int row;
    float *newarr=read_data(&col, &row);
    if(newarr==NULL){
        usage();
        free(newarr);
    }
    else{ //below is only executed if newarr is not NULL
        if(argc==2){
            if(strcmp(argv[1],"-d")==0){
                float *cleanarr=clean_delete(newarr, &col, &row);
                if(cleanarr==NULL){
                    usage();
                    free(newarr);
                }
                output_data(cleanarr, &col, &row);
                free(cleanarr);
            }
            else if(strcmp(argv[1],"--help")==0)
                help();
            else
                usage();
        }
        else if (argc==1){
            float *imputearr=clean_impute(newarr, &col, &row);
            if(imputearr==NULL){
                usage();
                free(newarr);
            }
            output_data(imputearr, &col, &row);
            free(imputearr);
        }
        else
            usage();
        free(newarr);
    }
}