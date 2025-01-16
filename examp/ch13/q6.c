#include <string.h>
#include <stdio.h>

void censor(char *str){
    char *p=str;
    while(p<str+strlen(str)-2){
        if(*p=='f'&&*(p+1)=='o'&&*(p+2)=='o'){
            *p='x';
            *(p+1)='x';
            *(p+2)='x';
            p+=3;
        }
        else
            p++;
    }
}

void main(){
    char str[]= "food fool foo"; //to change use []
    scanf("%s",str);
    printf("%s\n",str);
    censor(str);
    printf("censored: %s\n", str);
}