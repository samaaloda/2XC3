#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>



int main(){
    bool continuing = true;
    int Emonth=-1;
    int Eday=-1;
    int Eyear=-1;
    bool initial = true;
    do {
        int month, day, year;
        printf("Enter a date (mm/dd/yyyy): ");
        scanf("%d /%d /%d", &month, &day, &year);

        if (initial && month==0 && day==0 && year==0){
            printf("No dates entered.\n");
            continuing = false;
        }
	
        if(day==0 && month==0 && year==0 && !initial){
            printf("The earliest valid date is %d, ",Eday);
            switch(Emonth){
                case 2:
                    printf("February");
                    break;
                case 3: 
                    printf("March");
                    break;
                case 4:
                    printf("April");
                    break;
                case 5:
                    printf("May");
                    break;
                case 6:
                    printf("June");
                    break;
                case 7:
                    printf("July");
                    break;
                case 8:
                    printf("August");
                    break;
                case 9:
                    printf("September");
                    break;
                case 10:
                    printf("October");
                    break;
                case 11:
                    printf("November");
                    break;
                case 12:
                    printf("December");
                    break;
                default:
                    printf("January");
                    break;
            }
            printf(", %d \n",Eyear);
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
