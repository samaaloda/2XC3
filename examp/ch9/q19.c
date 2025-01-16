#include <stdlib.h>
#include <stdio.h>

void pb(int n){
    if(n!=0){
        pb(n/2);
        putchar('0'+n%2);
    }
}

int main(){
    printf("Enter a number: ");
    int num;
    scanf("%d", &num);
    //converts to binary :)
    pb(num);
    printf("\n");
}