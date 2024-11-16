#include "stdio.h"

void primeFactors(int number) {
    int n = number;

    printf("The prime factors of the number %d are: 1 ", number);

    for (int i = 2; i <= n; i++) {
        while (n % i == 0) {
        printf("%d ", i);
        n /= i;
        }
    }
    printf("\n");
}


int main(){
 int number;
 char repeatChoice;

// DRIVER CODE:
// do while loop that recurses the function primeFactors 
// when user inputs char "y/Y"

do {
    printf("Enter a non-negative number: ");
    scanf("%d", &number);
    if (number < 0) {
        printf("Please enter a Valid Number\n");
    } else if (number == 0) {
        printf("0 has no prime factors\n");
    } else if (number == 1) {
        printf("1 has no prime factors\n");
    } else {
        primeFactors(number);
    }

  printf("Do you want to enter another number? (y/n): ");
    scanf(" %c", &repeatChoice);

}
while (repeatChoice == 'y' || repeatChoice == 'Y');
printf("Exit\n");

  return 0;
}

// Code made by Julius castillejo of GROUP 18 and is licensed under GPL 3.0 