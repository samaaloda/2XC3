#include <string.h>
#include <stdlib.h>
#include <stdio.h>

char* capitalizeA(char* str){
    char* newstr=malloc(strlen(str)+1);
    for(int i=0;i<strlen(str);i++){
        if(str[i]>'a'&&str[i]<'z')
            newstr[i]=str[i]-'a'+'A';
        else
            newstr[i]=str[i];
    }
    newstr[strlen(str)]='\0';
    return newstr;
}

char* capitalizeB(char* str){
    char* newstr=malloc(strlen(str)+1);
    char* p=str;
    int count=0;
    for(p=str;p<str+strlen(str);p++){
        if(*p>'a'&&*p<'z')
            *(newstr+count)=*p-'a'+'A';
        else
            *(newstr+count)=*p;
        count++;
    }
    *(newstr+strlen(str))='\0';
    return newstr;
}

void main(){
    char* str= "umph!!!UMPH";
    printf("To upper %s\n", capitalizeB(str));
    printf("%d\n", strlen(capitalizeA(str)));
}