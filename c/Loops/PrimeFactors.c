#include "stdio.h"

void primeFactors(int number){

    printf("the prime factors of the number %d are:\n", number);

    int count =  2; 
    while (number > 1){

        if (number % count == 0 )
        {
            printf ("%d ", count);
            number /= count;
        } 
        else 
            count++;
    }
    printf ("\n");

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
        printf("Please enter a positive number\n");
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

// Code made by GROUP 18 and is licensed under GPL 3.0 