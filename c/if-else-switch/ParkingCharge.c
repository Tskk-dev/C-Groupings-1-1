#include "stdio.h"

int main(){
    char vehicleType;
    float hours, charge;
    

    printf("Enter vehicle type (c for car, b for bus, t for truck): ");
    scanf(" %c", &vehicleType);
    

    printf("Enter number of hours: ");
    scanf("%f", &hours);
    

    switch(vehicleType) {
        case 'c':
        case 'C':
            charge = hours * 25.00;
            printf("Vehicle Type: Car\n");
            break;
            
        case 'b':
        case 'B':
            charge = hours * 50.00;
            printf("Vehicle Type: Bus\n");
            break;
            
        case 't':
        case 'T':
            charge = hours * 75.00;
            printf("Vehicle Type: Truck\n");
            break;
            
        default:
            printf("Invalid vehicle type!\n");
            return 1;
    }
    
 
    printf("Hours parked: %.2f\n", hours);
    printf("Parking charge: P%.2f\n", charge);
    
    return 0;
}