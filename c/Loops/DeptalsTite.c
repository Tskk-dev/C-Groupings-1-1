#include <stdio.h>

int main() 
{
    float weight, totalLetterCost;
    int specification;
    char choice;

    do {
        printf("Please enter the weight of the letter (in grams): ");
        scanf("%f", &weight);

        printf("Please enter the letter code (Strictly 1 for ordinary, 2 for special): ");
        scanf("%d", &specification);

        if (specification == 1) {
            if (weight <= 1) {
                totalLetterCost = 20.00;
            } else {
                totalLetterCost = 20.00 + (15.00 * (int)((weight - 1) + 0.99));
            }
        } 

        else if (specification == 2) {
            if (weight <= 1) {
                totalLetterCost = 40.00;
            } else {
                totalLetterCost = 40.00 + (25.00 * (int)((weight - 1) + 0.99));
            }
        } 
        
        else {
            printf("Invalid letter code!\n");
            continue;
        }

        printf("Letter Weight: %.2f grams\n", weight);
        printf("Letter Code: %s\n", (specification == 1) ? "Ordinary" : "Special");
        printf("Total Postage Cost: Php. %.2f\n", totalLetterCost);

        printf("\nDo you want to calculate costs for another letter? (y/n): ");
        scanf(" %c", &choice);

    } while (choice == 'y' || choice == 'Y');

    return 0;
}