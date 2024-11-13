#include <stdio.h>


int main() {
    float daysLate, fine;
    int type;
    const float CD = 50.00, VHS = 35.00;

    printf("[Video tape Rental store]\n");
    printf("Enter the type of video tape (1 for CD and 2 for VHS): ");
    scanf("%d", &type);
    printf("Enter the number of days late: ");
    scanf("%f", &daysLate);

    if (daysLate <= 2) {
        fine = 10.00;
    } else if (daysLate <= 4) {
        fine = 15.00;
    } else if (daysLate <= 6) {
        fine = 20.00;
    } else if (daysLate >= 7) {
        if (type == 1) {
            fine = CD;
        } else if (type == 2) {
            fine = VHS;
        } else {
            printf("Invalid input for type\n");
            return 1;
        }
    } else {
        printf("Invalid input\n");
        return 1;
    }

    printf("The fine is: %.2f\n", fine);
    return 0;
}
