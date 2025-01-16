#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int min(int m, int n){
    if(m>n)
        return n;
    return m;
}
int max(int m, int n){
    if(m<n)
        return n;
    return m;
}

int gcd(int num1, int num2){
    int m=max(num1, num2);
    int n=min(num1, num2);
    if(n==0)
        return m;
    else{
        gcd(n, m%n);
    }
}


int main(){
    printf("The gcd of 12 and 28 is %d\n", gcd(12,28) );
}