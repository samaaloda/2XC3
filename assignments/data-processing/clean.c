/*
Sama Al-Oda, 400531762, November 7th 2024
Clean program that manages the data provided from a non-usable data file from either a file or from standard input. 
*/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include "datap.h"


/*
Main function
argc is an integer that represents the number of arguments passed through the command line.
argv is a character array that holds each token as one index

This function calls on userInput which is a function in the userIn.c file. 
*/
void main(int argc, char* argv[]){
    userInput(argc, argv);
}