#include <stdio.h>

#define MILES_TO_FEET 5280
#define MILES_TO_METERS 1609.34

int main() {
    float mins = 0, seconds = 0;
    float distance_miles = 1.0; 

    printf("[-----------------PENN RELAY RACE TIMES----------------]\n");
    printf("Enter the minutes for the runner: ");
    scanf("%f", &mins);
    printf("Enter the seconds for the runner: ");
    scanf("%f", &seconds);

    
    float total_seconds = (mins * 60) + seconds;
    float speed_fps = (distance_miles * MILES_TO_FEET) / total_seconds;
    float speed_mps = (distance_miles * MILES_TO_METERS) / total_seconds;

 
    printf("Speed: %.2f feet per second\n", speed_fps);
    printf("Speed: %.2f meters per second\n", speed_mps);
    printf("[--------------Made by Juls, Shan & Jasper-------------]\n");

    return 0;
}