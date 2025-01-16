#include <string.h>
#include <stdlib.h>
#include <stdio.h>

void remove_filename1(char *url){
    for(int i=strlen(url)-1;i>=0;i--){
        if (*(url+i) =='/'){
            *(url+i)='\0';
            return;
        }
    }
}

void remove_filename(char *url){
    char *p;
    p=url+strlen(url)-1;
    while(*p){
        if(*p=='/'){
            *p='\0';
            return;
        }
        p--;
    }
}
/*    for(p=url+strlen(url)-1;p>=url;p--){
        if(*p=='/')
            *p='\0';
    }*/
void main(){
    char url[] = "http://www.knking.com/index.html";
    remove_filename(url);
    printf("%s\n",url);
}