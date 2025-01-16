#include <stdio.h> 
#include <stdlib.h>

void inputInteger(int* i){
    while(scanf("%d",i)!=1){
        printf("Enter real number: ");
        while(getchar()!='\n');
    }
}

int min(int one, int two){
    if(one<two)
        return one;
    return two;
}

int gcd1(int num1, int num2){
    int gcd=1;
    for(int i=1;i<min(num1,num2);i++){
        if(num1%i==0 && num2%i==0)
            gcd=i;
    }
    return gcd;
}

int max(int one, int two){
    if (one>two)
        return one;
    return two;
}

int gcd(int num1, int num2){
    int rem=0;
    int m=max(num1,num2);
    int n=min(num1,num2);
    while(n!=0){
        rem=m%n;
        m=n;
        n=rem;
    }
    return m;
}

int main(){
    int one;
    int two;
    printf("Enter first number: ");
    inputInteger(&one);
    printf("Enter second number: ");
    inputInteger(&two);

    printf("The greatest common divisor is %d\n", gcd(one, two));

    return 0;
}