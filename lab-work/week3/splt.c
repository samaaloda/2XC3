#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {

    
    while(true){
        char word[1000];
        int inputted;
        if (scanf("%s",word)==1){
            printf("%s\n", word);
        }
        if (scanf("%d",&inputted)==EOF)
            break;
    }
    return EXIT_SUCCESS;
}

