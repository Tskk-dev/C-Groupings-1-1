#include <stdio.h>

// Function to calculate the sum of factors and determine if the number is DWARF
int isDwarf(int n) {
    int sum = 0;
    printf("Factors of %d are: ", n);
    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0) {
            sum += i;
            printf("%d ", i);
        }
    }
    printf("\nSum of its factors: %d\n", sum);
    printf("Half of the number: %d / 2 = %.1f\n", n, n / 2.0);

    return sum > (n / 2.0);
}

int main() {
    int n;
    char choice;

    do {
        printf("Enter a non-negative integer: ");
        while (scanf("%d", &n) != 1 || n < 0) {
            printf("Invalid input. Please enter a non-negative integer: ");
            while (getchar() != '\n'); // Clear the input buffer
        }

        if (isDwarf(n)) {
            printf("%d is DWARF\n", n);
        } else {
            printf("%d is NOT DWARF\n", n);
        }

        printf("Do you want to check another number? (y/n): ");
        scanf(" %c", &choice);
    } while (choice == 'y' || choice == 'Y');

    return 0;
}