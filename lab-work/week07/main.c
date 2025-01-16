#include <stdlib.h>
#include <stdio.h>
#include "array_utilities.h"

int main(){
    
    int test[] = {3,7,5,7,7,6,8,5,6,6,6,9};
    printf("Here is an array consisting of: %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d\n", test[0], test[1], test[2], test[3], test[4], test[5], test[6], test[7], test[8], test[9], test[10], test[11]);
    
    int key =4;
    printf("The return value after calling on find_index with a key of %d is %d\n", key, find_index(test,12,key));
    if (find_pointer(test,12,key) == NULL)
        printf("After calling on find_pointer with Key %d NOT FOUND\n", key);
    else
        printf("After calling on find_pointer with Key %d FOUND %d\n", key, *find_pointer(test,12,key));
    
    key=3;
    printf("The return value after calling on find_index with a key of %d is %d\n", key, find_index(test,12,key));
    if (find_pointer(test,12,key) == NULL)
        printf("After calling on find_pointer with Key %d NOT FOUND\n", key);
    else
        printf("After calling on find_pointer with Key %d FOUND %d\n", key, *find_pointer(test,12,key));
    
    key=9;
    printf("The return value after calling on find_index with a key of %d is %d\n", key, find_index(test,12,key));
    if (find_pointer(test,12,key) == NULL)
        printf("After calling on find_pointer with Key %d NOT FOUND\n", key);
    else
        printf("After calling on find_pointer with Key %d FOUND %d\n", key, *find_pointer(test,12,key));
    
    
    printf("Counting this array for instances of the number 6 gives a sum of: %d\n",count(test,12,6));
    printf("Counting this array for instances of the number 3 gives a sum of: %d\n",count(test,12,3));
    printf("Counting this array for instances of the number 5 gives a sum of: %d\n",count(test,12,5));

    key=3;
    int test1[3][3]={{2,4,6},{3,4,5},{3,6,7}};
    printf("Here's a 2D test array:\n");
    printf("%d %d %d\n", test1[0][0], test1[0][1], test1[0][2]);
    printf("%d %d %d\n", test1[1][0], test1[1][1], test1[1][2]);
    printf("%d %d %d\n", test1[2][0], test1[2][1], test1[2][2]);

    printf("The count of this array for key of %d is: %d\n", key, count2d(test1,3,3,key));
    printf("Here's another 2D array: \n");
    key=2;
    int test2[3][3]={{1,2,1},{2,3,4},{2,2,6}};
    printf("%d %d %d\n", test2[0][0], test2[0][1], test2[0][2]);
    printf("%d %d %d\n", test2[1][0], test2[1][1], test2[1][2]);
    printf("%d %d %d\n", test2[2][0], test2[2][1], test2[2][2]);
    printf("The count of this array for key of %d is: %d\n", key, count2d(test2,3,3,key));
}
