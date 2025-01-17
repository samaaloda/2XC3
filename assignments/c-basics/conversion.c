/*
Sama Al-Oda, 400531762, November 7th 2024
Convert program that converts a number from decimal (base 10) to a desired base (from 2 to 36). It can print conversions of numbers in a specified range as well. 
*/
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#define MAX_B_VALUE 36
#define MIN_B_VALUE 2

/* convert2Alpha
*
* num of type long: used to find the corresponding alphanumeric character
* This functions converts a number to its alphanumeric character. 
* Return value is a character that returns the alphanumeric conversion of the number num
*/
char convert2Alpha(long num){
    if(num>=0 && num<=9)
        return '0'+ num;//iterates to the correct character representing the number num
    else
        return 'A'+num-10;//iterates to the correct character representing the number num
    }
/* abslong
*
* x of type long: used to find the absolute value of x
* This functions returns the absolute value of x.
* Return value is a long number that is the absolute value of x.
*/
long abslong(long x){
    if(x<0)
        return -x;
    return x;
}
/* convert2Base
*
* num of type long: used as the decimal value to convert. 
* base of type int: used as the base value for conversion
* This functions prints to stdout the converted number from decimal num to the specified base using recursion.
* Return value is a long number that returns the num at each level of the recursive calling.
*/
long convert2Base(long num, int base){
    if (abslong(num)<base){
        if(num<0)
            printf("-");
        printf("%c",convert2Alpha(abslong(num%base)));
        return 0;
    }
    else{
        convert2Base(num/base,base);
        printf("%c", convert2Alpha(abslong(num%base)));
        return num;
    }
}
/* rangeConvert
*
* long of type start: used as the start value for the range conversion 
* long of type finish: used as the finish value for the range conversion 
* base of type int: used as the base value for conversion
* This function calls on convert2base, which prints to stdout the converted number from decimal num to the specified base using recursion, of every number in the range from start to finish (inclusive)
* There is no return value
*/
int rangeConvert(int base, long start, long finish){
    for(long i=start;i<=finish;i++){
        convert2Base(i, base);
        printf("\n");
    }
    return 0;
}
/* loopConvert
*
* base of type int: used as the base value for 
* This function takes in user input from stdin continuously until EOF or non-number is given.
* This function calls on convert2base, which prints to stdout the converted number from decimal num to the specified base using recursion, of every number in the range from start to finish (inclusive)
* There is no return value
*/
int loopConvert(int base){
    while (true){
        long num;
        int result=scanf("%ld",&num);
        if(result == EOF){
            return 0;
        }
        else if (result == 0){//if result ==0, that signifies that a non-number was input
            fprintf(stderr, "Error: Non-long-int token encountered.\n");
            return 1;
        }
        convert2Base(num, base);
        printf("\n");
        }
}
/* usage
*
* This function prints to stderr the usage of these files for the user to follow.
* There is no return value
*/
void usage(){
    fprintf(stderr, "Usage: convert [-b BASE] [-r START FINISH]\n       1 < BASE < 37\n       START and FINISH are long integers\n");
}
/* help
*
* This function prints to stdout the a manual to aid the user to utilize these files.
* There is no return value
*/
void help(){
    printf("Usage: convert [-b BASE] [-r START FINISH]\n");
    printf("Converts a number from standard input into BASE of choosing. It can convert numbers from a range of START to FINISH to the desired BASE as needed.\n\n");
    printf("       --help,       display this help and exit\n");
    printf("Examples:\n");
    printf("       convert -b 4 -r -3 3       converts numbers from -3 to 3 from decimal to base 4.\n");
    printf("       convert -b 18        converts numbers from standard input from decimal to base 18\n");
    printf("       convert        converts numbers from standard input from decimal to hexadecimal.\n");
}
/* askUser
*
* argc of type int: takes in number of arguments
* argv of type char*[]: takes in each of these arguments seperately
* This function calls in all other functions based on arguments provided
* It returns 0 if user has successfully used these files properly, otherwise it returns 1.
*/
int askUser(int argc, char* argv[]){
    if(argc==1)//if arguments look like ./convert
        return loopConvert(16);
    else if(argc==4){
        if(strcmp(argv[1],"-r")==0 && (atol(argv[2])!=0 || (strcmp(argv[2],"0")==0)) && (atol(argv[3])!=0 || (strcmp(argv[3],"0")==0))&& atol(argv[2])<atol(argv[3]))//if arguments look like ./convert -r 3 4
            return rangeConvert(16,atol(argv[2]), atol(argv[3]));
        else if (strcmp(argv[1],"-r")==0 && atol(argv[2])>atol(argv[3])){//if arguments look like ./convert -r 10 0
            return 0;
        }
        else{//if arguments look like ./convert a c d (where a c d do not satisfy the above conditions)
            usage();
            return 1;
        }
    }
    else if(argc==3){
        if(strcmp(argv[1],"-b")==0&& atoi(argv[2])<=MAX_B_VALUE && atoi(argv[2])>=MIN_B_VALUE)//if arguments look like ./convert -b 12
            return loopConvert(atoi(argv[2]));
        else if(atoi(argv[2])>MAX_B_VALUE || atoi(argv[2])<MIN_B_VALUE){//if provided base is not in the range of 2 to 36
            usage();
            return 1;
        }
    }
    else if(argc==6 && strcmp(argv[1],"-b")==0&& atoi(argv[2])>=MIN_B_VALUE && atoi(argv[2])<=MAX_B_VALUE && strcmp(argv[3],"-r")==0 && (atol(argv[4])!=0 || (strcmp(argv[4],"0")==0)) && (atol(argv[5])!=0 || (strcmp(argv[5],"0")==0)) && atol(argv[4])<atol(argv[5]))//if arguments look like ./conver -b 12 -r 3 6
        rangeConvert(atol(argv[2]),atol(argv[4]), atol(argv[5]));
    else if(argc==2 && strcmp(argv[1],"--help")==0){//if arguments look like ./convert --help
        help();
        return 0;
    }
    else{//any other invalid arguments
        usage();
        return 1;
    }
    return 0;

}
