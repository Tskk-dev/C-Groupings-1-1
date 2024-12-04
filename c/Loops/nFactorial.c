#include <stdio.h>

// Function to calculate factorial and print the steps
unsigned long long factorial(int n) {
    if (n == 0) {
        printf("1\n");
        return 1;
    }
    unsigned long long result = 1;
    printf("The factorials of %d are: ", n);
    for (int i = 1; i <= n; i++) {
        result *= i;
        if (i == n) {
            printf("%d", i);
        } else {
            printf("%d x ", i);
        }
    }
    printf("\n");
    return result;
}

int main() {
    int n;
    char choice;

    do {
        printf("Enter a nonnegative integer: ");
        while (scanf("%d", &n) != 1 || n < 0) {
            printf("Invalid input. Please enter a nonnegative integer: ");
            +
        }

        printf("Factorial of %d is %llu\n", n, factorial(n));
        printf("Do you want to calculate another factorial? (y/n): ");
        scanf(" %c", &choice);

    } while (choice == 'y' || choice == 'Y');

    printf("Exit\n");

    return 0;
}
