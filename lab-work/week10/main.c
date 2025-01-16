#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "string_utilities.h"

int main() {
    char input[100+1];
    scanf("%s",input);
    printf("%s", input);
    printf("To Upper: %s\n",to_upper(input));
    /*
    while (fgets(input, 100, stdin)){
        input[strcspn(input, "\n")] = '\0';
        printf("Trimmed string: %s\n", trim(input));
        printf("To Upper: %s\n",to_upper(input));
        printf("To Lower: %s\n",to_lower_pure(input) );
    }*/

}