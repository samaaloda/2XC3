#include <stdlib.h>

void* my_malloc(int n){
    void *p=malloc(n);
    if(!p){
        fprintf(stderr,"Error!\n");
        return NULL;
    }
    return p;
}

void main(){
    
}