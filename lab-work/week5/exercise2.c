#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){
    bool continuing = true;
    int Emonth=-1;
    int Eday=-1;
    int Eyear=-1;
    bool initial = true;
    do{
        int month, day, year;
        printf("Enter a date (mm/dd/yyyy): ");
        scanf("%d /%d /%d", &month, &day, &year);
        
        if (initial && month==0 && day==0 && year==0){
            printf("No dates entered.\n");
            continuing = false;
        }
        
        if(day==0 && month==0 && year==0 && !initial){
            printf("The earliest valid date is %d/%d/%d\n",Emonth,Eday,Eyear);
            continuing = false;
        }

        if((year<Eyear)||(year==Eyear && month<Emonth)||(year==Eyear && month==Emonth && day<Eday)||initial){
            Eyear = year;
            Emonth = month;
            Eday = day;
        }
	


        initial = false;
    } while (continuing);
}

