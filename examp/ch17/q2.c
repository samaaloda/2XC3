#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char* duplicate(char* str){
    char* newarr=malloc(strlen(str)+1);
    if(!newarr)
        return NULL;
    int i;
    for(i=0;i<strlen(str);i++){
        *(newarr+i)=*(str+i);
    }
    *(newarr+i)='\0';
    return newarr;
}


void main(){
    char* str="Bizzy Bap";
    char* anotherStr= duplicate(str);
    printf("New string: %s\n", anotherStr);
}