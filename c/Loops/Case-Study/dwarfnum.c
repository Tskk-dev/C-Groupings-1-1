#include <stdio.h>

int main() {
    int num;
    char choice;

    printf("[-----------------DWARF Checker----------------]\n");

    do {
        // Input validation
        printf("Enter a non-negative integer: ");
        while (scanf("%d", &num) != 1 || num < 0) {
            printf("Invalid input. Please enter a non-negative integer: ");
            while (getchar() != '\n'); // Clear invalid input from buffer
        }

        // Finding factors and their sum
        int sum = 0;
        printf("Factors are: ");
        for (int i = 1; i <= num / 2; ++i) {
            if (num % i == 0) {
                printf("%d ", i);
                sum += i;
            }
        }
        printf("\n");

        // Checking if the number is DWARF
        printf("Sum of its factors: %d\n", sum);
        double half = num / 2.0;
        printf("Half of the number: %.1f\n", half);
        
        if (sum > half) {
            printf("%d is DWARF\n", num);
        } else {
            printf("%d is NOT DWARF\n", num);
        }

        // Prompt for another check
        printf("Do you want to check another number? (y/n): ");
        scanf(" %c", &choice);
        while (getchar() != '\n'); // Clear extra input from buffer

    } while (choice == 'y' || choice == 'Y');

    printf("Thank you for using the DWARF Checker!\n");
    printf("[---------- Group 18, Copyright 2024 ----------]\n");

    return 0;
}
