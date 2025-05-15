#include <stdio.h>

// Define structure
struct ComputerUsage {
    char computer_ID[20];
    int timeIn;     // Military format, e.g., 1300
    int timeOut;
    float hoursSpent;
    float amountToPay;
};

// Compute hours between timeIn and timeOut
float computeHours(int in, int out) {
    int inH = in / 100, inM = in % 100;
    int outH = out / 100, outM = out % 100;

    int totalIn = inH * 60 + inM;
    int totalOut = outH * 60 + outM;

    return (totalOut - totalIn) / 60.0f;
}

// Display output
void displayComputerUsage(struct ComputerUsage usage) {
    printf("\nABC Computer Center Daily Monitoring Report\n");
    printf("Computer_ID: %s\n", usage.computer_ID);
    printf("Time-IN: %04d\n", usage.timeIn);
    printf("Time-OUT: %04d\n", usage.timeOut);
    printf("Number of hours spent: %.2f\n", usage.hoursSpent);
    printf("Amount to be paid: %.2f\n", usage.amountToPay);
}

int main() {
    struct ComputerUsage usage;

    printf("Enter Computer ID: ");
    scanf("%s", usage.computer_ID);

    printf("Enter Time-IN (HHMM): ");
    scanf("%d", &usage.timeIn);

    printf("Enter Time-OUT (HHMM): ");
    scanf("%d", &usage.timeOut);

    usage.hoursSpent = computeHours(usage.timeIn, usage.timeOut);
    usage.amountToPay = usage.hoursSpent * 12.0f;

    displayComputerUsage(usage);

    return 0;
}
