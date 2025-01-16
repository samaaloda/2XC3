#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

double largest(double* nums, int size){
	double largest=*nums;
	for(int i=0;i<size;i++ ){
		if(largest < *(nums+i))
			largest = *(nums+i);
	}
	return largest;
}


int main(){
	double i=0;
	int count=0;
	double* nums=malloc(sizeof(double));
	if(nums==NULL){
		fprintf(stderr, "Memory Allocation failed\n");
		return EXIT_FAILURE;
	}
	do{
		nums = realloc(nums, (count+1)*sizeof(double));
		if(nums==NULL){
			fprintf(stderr, "Memory Allocation failed\n");
			return EXIT_FAILURE;
		}
		printf("Enter a number: ");
		while(scanf("%lf",&i)!=1){
			printf("Real nums only\n");
			while (getchar() != '\n');
			printf("Enter a number: ");
		}
		*(nums+count)=i;
		count++;
	}while(i>0);

	printf("The largest number entered was %.3lf\n", largest(nums, count));
	free(nums);
	return 0;
}	
