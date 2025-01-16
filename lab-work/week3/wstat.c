#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){
    double lines, words, characters;
    scanf("%lf", &lines);
    scanf("%lf", &words);
    scanf("%lf", &characters);
    if (lines ==0){
        fprintf(stderr, "Cannot divide by 0 lines.\n");
        return EXIT_FAILURE;
    }
    characters = characters - lines; //ask 
    double avg_line_length = characters/lines;

    printf("%.1f\n",avg_line_length);
    return EXIT_SUCCESS;
}
