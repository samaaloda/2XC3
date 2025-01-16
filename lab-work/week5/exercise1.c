#include <stdio.h>
#include <stdlib.h>

int main() {
    int days;
    int firstday;
    printf("How many days this month? ");
    scanf("%d", &days);
    printf("What's the starting day (1=Monday, 7=Sunday)? ");
    scanf("%d", &firstday);
    printf("M\tT\tW\tT\tF\tS\tS\n");
    
    for (int i=1; i<firstday; i++){
        printf(" \t");
    }
    
    for (int j=1; j<(days+1); j++){
        if ((j - 2 + firstday)%7==0){
            printf("\n");
        }
        printf("%d\t",j);
    }
    printf("\n");
    return EXIT_SUCCESS;
}
