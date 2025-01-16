#include <stdio.h>
#include <stdlib.h>

int min(int one, int two){
    if(one<two)
        return one;
    return two;
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
    int num;
    int denom;
    printf("Enter a fraction: ");
    scanf("%d/%d",&num, &denom);
    int gcdd = gcd(num, denom);
    printf("In lowest terms: %d/%d\n",(num/gcdd), (denom/gcdd));
}