#include <stdio.h>

int main() {
    float polIndex;

    // Prompt user for input
    printf("Enter the pollution index: ");
    scanf("%f", &polIndex);

    if (polIndex < 0) {
        printf("Input is Invalid\n");
    } else if (polIndex < 35) {
        printf("The pollution levels today is at a pleasant level\n");
    } else if (polIndex >= 35 && polIndex <= 60) {
        printf("The pollution levels today is at an unpleasant level\n");
    } else {
        printf("The pollution levels today is at a hazardous level\n");
    }

    return 0;
}