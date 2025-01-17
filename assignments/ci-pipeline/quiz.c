/*
Sama Al-Oda, 400531762, October 3rd 2024
Quiz program that quizzes the user on 3 questions of which they try to guess the answer.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
Main function
argc is an integer that represents the number of arguments passed through the command line.
argv is a character array that holds each token as one index

This function outputs the menu when not prompted with an argument. Otherwise, it will output the question associated with the command. 
If the user attempts to answer said question and the answer is right, an appropriate response is printed.

EXIT_SUCCESS is returned after the function has finished executing.
*/
int main(int argc, char *argv[]){
    if (argc>3){
        if ((strcmp(argv[1],"-3")==0)&&(strcmp(argv[2],"git")==0)&&(strcmp(argv[3],"status")==0))
            printf("Correct Answer\n");
        else
            printf("Too many arguments.\n");
    }
    else if (argc==3){
        if((strcmp(argv[1],"-1")==0)&&(strcmp(argv[2],"ls")==0))
            printf("Correct Answer.\n");
        else if((strcmp(argv[1],"-2")==0)&&(strcmp(argv[2],"int")==0))
            printf("Correct Answer.\n");
        else
            printf("Bad answer.\n");
    }
    else if (argc==2){
        if (strcmp(argv[1],"-1")==0)
            printf("What is the command for listing all directories and files in your current directory?\n");
        else if(strcmp(argv[1],"--help")==0){
            printf("Type ./quiz to get a list of commands.\n");
            printf("Type ./quiz -x and replace x by the question number to get that number's question.\n");
            printf("Type ./quiz -x y and replace x by the question number, and y by your answer for the question's number.\n");
        }
        else if(strcmp(argv[1],"-2")==0)
            printf("What type of value does EXIT_SUCCESS give?\n");
        else if (strcmp(argv[1],"-3")==0)
            printf("How do you check the status of your files with Git?\n");
        else
            printf("Bad request.\n");
    }
    else {
        printf("Welcome! Please pick one of the following questions:\n1. Question 1\t-1\n2. Question 2\t-2\n3. Question 3\t-3\n");

    }

    
    return EXIT_SUCCESS;
}
