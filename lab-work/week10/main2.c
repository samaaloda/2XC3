#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "string_utilities.h"

int main() {

    char *s1 = "                   hello friend   ";
    printf("First string: %s\n",s1);
    char *f1, *l1;
    find_content(s1, &f1, &l1);
    printf("First and last: %c...%c\n", *f1, *l1);
    printf("Trimmed string: %s\n", trim(s1));

    
    char *f2, *l2;
    char *s2="      ";
    printf("\nSecond string: %s\n",s2);
    find_content(s2, &f2, &l2);
    printf("First and last: %c...%c\n", *f2, *l2);
    printf("Trimmed string: %s\n", trim(s2));

    char *f3, *l3;
    char *s3="           c h p b m i w h s b    ";
    printf("\nThird string: %s\n",s3);
    find_content(s3, &f3, &l3);
    printf("First and last: %c...%c\n", *f3, *l3);
    printf("Trimmed string: %s\n", trim(s3));



}