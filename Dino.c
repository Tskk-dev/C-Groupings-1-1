#include "stdio.h"

int main(){
   const float daysInYear = 365.25, secondsInDay = 86400;
   float inputYear = 0 , years = 0, months = 0 ,days = 0  , seconds = 0;
   char name[20];

    printf("[------------------------Dino-Age-----------------------]\n");
    printf("How many millions of years old is your dinosaur? (do not enter the zeroes): ");
    scanf("%f" , &inputYear);

    printf("what is the name of your dinosaur?: ");
    scanf("%s" , name);
    
    years = inputYear * 1000000;
    months = inputYear * 12;
    days = inputYear * daysInYear;
    seconds = days * secondsInDay;

    printf("%s the dinosaur is %f months old\n" , name,  months );
    printf("%f days old\n" , days );
    printf("and %f seconds old\n" , seconds );

    printf("[--------------Made by Juls, Shan & Jasper-------------]\n");
    return 0; 
}