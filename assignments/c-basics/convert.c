/*
Sama Al-Oda, 400531762, November 7th 2024
Convert program that converts a number from decimal (base 10) to a desired base (from 2 to 36). It can print conversions of numbers in a specified range as well.
*/
#include <stdio.h>
#include <stdlib.h>
#include "conversion.h"

/*
Main function
argc is an integer that represents the number of arguments passed through the command line.
argv is a character array that holds each token as one index

This function calls on askUser which is a function in the conversion.c file. 

The return value of askUser is the same as the return value of main.
*/
int main(int argc, char* argv[]) {
    return askUser(argc, argv);//returns the return value of askUser in conversion.c
}