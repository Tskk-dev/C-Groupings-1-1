#include <stdio.h>

int main()
{
    int n;
    char choice;
    printf("[----------Proper Divisor calculator----------]\n");

    do
    {
        printf("Enter a positive integer: ");
        while (scanf("%d", &n) != 1 || n <= 0) // check if input is a positive integer
        {
            printf("Invalid input. Please enter a positive integer: ");
            while (getchar() != '\n');         // clear input buffer to prevent infinite loop
        }

        int sum = 0;                           // variable to hold the sum of proper divisors
        printf("Proper divisors of %d are: ", n);

        for (int i = 1; i < n; i++)            // iterate through all numbers from 1 to n-1
        {
            if (n % i == 0)                    // check if i is a proper divisor of n
            {
                sum += i;                     // add i to the sum
                printf("%d ", i);             // print the proper divisor
            }
        }
        printf("\n");

        printf("Sum of proper divisors: %d\n", sum);

        // check if the number is deficient, perfect, or abundant
        if (sum < n)
        {
            printf("%d is DEFICIENT\n", n);
        }
        else if (sum == n)
        {
            printf("%d is PERFECT\n", n);
        }
        else
        {
            printf("%d is ABUNDANT\n", n);
        }

        printf("Do you want to check another number? (y/n): ");
        scanf(" %c", &choice);

    } while (choice == 'y' || choice == 'Y'); // repeat the loop if user enters 'y' or 'Y'

    printf("[----------Copyright 2024 Group 18----------]\n");

    return 0;
}
