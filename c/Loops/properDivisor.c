#include <stdio.h> 
int sumOfDivisors(int n){ int sum = 0; printf("Proper divisors of %d are: ", n); for (int i = 1; i < n; i++){ if (n % i == 0) {sum += i; printf("%d ", i);}}printf("\n");return sum;}

int main()
{
    int n;
    char choice;

    do
    {
        printf("[----------Proper Divisor calculator----------]\n");
        printf("Enter a positive integer: ");
        while (scanf("%d", &n) != 1 || n <= 0)
        {
            printf("Invalid input. Please enter a positive integer: ");

            while (getchar() != '\n')
                ;
        }

        int sum = sumOfDivisors(n);
        printf("Sum of proper divisors: %d\n", sum);

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
    } while (choice == 'y' || choice == 'Y');

    return 0;
}