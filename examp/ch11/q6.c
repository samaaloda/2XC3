#include <stdlib.h>
#include <stdio.h>

void find_two_largest(int a[], int n, int *largest, int *second_largest){
    for(int i=0;i<n;i++){
        if(*(a+i)>*largest){
            int temp = *largest;
            *largest=*(a+i);
            *second_largest=temp;
        }
    }
}

int main(){
    int arr[4]={2, 5, 8, 1};
    int largest=0;
    int second_largest=0;
    find_two_largest(arr, 4, &largest, &second_largest);
    printf("largest and 2nd largest are %d %d\n",largest, second_largest);
}