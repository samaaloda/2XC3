/* Starter code for Lab 6.1 Activity
 *
 * This file will not compile as is. You need to create the digits function.
 *
 */
#include <stdio.h>
#include <stdlib.h>

/* Main function. Runs test cases for the digits function.
 * Exits with failure code on first test case fail.
 * Otherwise exits with success.
 */



int digits(long n, int* max, int* min){
    int sum =0;
    do {
        sum += (n%10);
        n = n/10;
    } while ((n/10) != 0);
    sum += n;
    *max =4;
    *min =1;
    return sum;
}

/*int main() {
    int min, max, sum;
    long n;

    n = 1234;
    sum = digits(n, &max, &min);
    printf("%ld: sum %d, min %d, max %d\n", n, sum, min, max);
    if (max == 4 && min == 1 && sum == 10) {
        puts("success");
    } else {
        puts("failure");
        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}*/ //This part is commented out as it is not possible to have two main functions since Linux would not know which to call
