#include <stdint.h>
#include <stdio.h>

int main() {
  int64_t n;
  char choice;
  printf("[-------------N! Calculator-------------]\n\n");

  do {
    printf("Enter a non-negative integer: ");
    while (scanf("%lld", &n) != 1 || n < 0) { // check if input is a non-negative integer
      printf("Invalid input. Please enter a non-negative integer: ");
      while (getchar() != '\n');             // clear input buffer to prevent infinite loop
    }

    int64_t result = 1;

    // Base case: factorial of 0 is defined as 1
    if (n == 0) {
      printf("1\n");
      result = 1;
    } else {
      printf("The factorials of %lld are: ", n);

      for (int64_t i = 1; i <= n; i++) { // iterate from 1 to n
        result *= i;                     // multiply result by i

        if (i == n) {
          printf("%lld", i);             // print i without 'x' if it is the last number
        } else {
          printf("%lld x ", i);          // print i with 'x' if it is not the last number
        }
      }
      printf("\n");
    }

    printf("%lld! is %lld\n", n, result); // calculate and print the factorial of n

    printf("Do you want to calculate another factorial? (y/n): ");
    scanf(" %c", &choice);
    while (getchar() != '\n');           // clear extra input from buffer

  } while (choice == 'y' || choice == 'Y'); // repeat the loop if user enters 'y' or 'Y'

  printf("Thank you for using our program!\n\n");
  printf("[--------Copyright 2024, Group 18--------]\n");

  return 0;
}
