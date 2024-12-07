#include <stdio.h>


int findFactorsAndSum(int num) {
    int sum = 0;
    printf("Factors are: ");
    for (int i = 1; i <= num / 2; ++i) {
        if (num % i == 0) {
            printf("%d ", i);
            sum += i;
        }
    }
    printf("\n");
    return sum;
}


int isDwarf(int num) {
    int sum = findFactorsAndSum(num);
    printf("Sum of its factors: %d\n", sum);
    double half = num / 2.0;
    printf("Half of the number: %.1f\n", half);
    return sum > half;
}

int main() {
    int num;
    char choice;

    do {
        printf("Enter a non-negative integer: ");
        scanf("%d", &num);

        if (num < 0) {
            printf("Invalid input. Please enter a non-negative integer.\n");
            continue;
        }

        if (isDwarf(num)) {
            printf("%d is DWARF\n", num);
        } else {
            printf("%d is NOT DWARF\n", num);
        }

        printf("Do you want to check another number? (y/n): ");
        scanf(" %c", &choice);

    } while (choice == 'y' || choice == 'Y');

    return 0;
}
