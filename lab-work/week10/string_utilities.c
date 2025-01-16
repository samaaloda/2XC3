#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char* to_upper(char* str){
    for(int i=0;i<strlen(str);i++){
        if(*(str+i)>='a' && *(str+i)<='z')
            str[i]=str[i]-'a'+'A';
    }
    return str;
}

char* to_lower_pure(char* str){
    char* newstr=malloc(strlen(str)*sizeof(char));
    for(int i=0;i<strlen(str);i++){
        if(str[i]>='A' && str[i]<='Z')
            newstr[i]=(str[i]-'A'+'a');
        else
            newstr[i]=str[i];
    }
    return newstr;
}


void find_content1(char* str, char** first, char** last) {
    *first=NULL;
    *last=NULL;
    for(int i=0;i<strlen(str);i++){
        if (*(str+i) !='\n'&&*(str+i) !=' '&&*(str+i) !='\t'){
            *first=str+i;
            break;
        }
    }
    for(int i=strlen(str)-1;i>=0;i--){
        if (*(str+i) !='\n'&&*(str+i) !=' '&&*(str+i) !='\t'){
            *last=str+i;
            break;
        }
    }
    if(*first==NULL && *last ==NULL){
        *first=str + strlen(str);
        *last=str + strlen(str);
    }
}

void find_content(char * str, char** first, char** last){
    for(int i=0;i<strlen(str);i++){
        if(*(str+i)!= ' '&&*(str+i)!='\n'&&*(str+i)!='\t'){
            **first=*(str+i);
            break;
        }
    }
    printf("%c", **first);

    for(int i=strlen(str)-1;i>=0;i--){
        if(*(str+i)!= ' '&&*(str+i)!='\n'&&*(str+i)!='\t'){
            **last=*(str+i);
            break;
        }
    }
    printf("%c    \n", **last);
}

void trimNOT(char** str){ //why doesnt this work
    char *first, *last; //double pointer
    find_content(str, &first, &last);
    *str=first;
    *(last+1)='\0';
}

void trim (char *str){
    char *first, 
    char* newstr=malloc(strlen(str)+1);
    find_content(str,&first,&last);
    strncpy(newstr, first, last-first+1);
    *(newstr+strlen(newstr))='\0';
    str=newstr;
}


char* trim1(char *str){
    char *first, *last;
    find_content(str, &first, &last);
    
    int len=last-first+1;
    char* newstr=malloc((len+1)*sizeof(char));
    for(int i=0; i<=len;i++){
        newstr[i]=first[i];
    }
    newstr[len]='\0';
    return newstr;
} 
