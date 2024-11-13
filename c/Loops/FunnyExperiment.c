#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool isPrime(int number) {
    if (number <= 1) return false;
    if (number == 2) return true;
    if (number % 2 == 0) return false;

    for (int i = 3; i <= sqrt(number); i += 2) {
        if (number % i == 0) return false;
    }
    return true;
}


void printSpiral(int n) {
    int row = 0, col = 0;
    int boundary = n - 1;
    int sizeLeft = n - 1;
    int flag = 1;
    char move = 'r';
    int matrix[n][n];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            matrix[i][j] = 0;

   
    int currentNumber = 2;  

    for (int i = 1; i <= n * n; i++) {
   
        while (!isPrime(currentNumber)) {
            currentNumber++;
        }

        matrix[row][col] = currentNumber;

   
        currentNumber++;

        switch (move) {
            case 'r': col += 1; break;
            case 'l': col -= 1; break;
            case 'u': row -= 1; break;
            case 'd': row += 1; break;
        }

     
        if (i == boundary) {
            boundary += sizeLeft;
            if (flag != 2) {
                flag = 2;
            } else {
                flag = 1;
                sizeLeft -= 1;
            }

            
            switch (move) {
                case 'r': move = 'd'; break;
                case 'd': move = 'l'; break;
                case 'l': move = 'u'; break;
                case 'u': move = 'r'; break;
            }
        }
    }


    for (row = 0; row < n; row++) {
        for (col = 0; col < n; col++) {
            int num = matrix[row][col];
            if (num < 10)
                printf(" %d  ", num); 
            else
                printf("%d ", num);
        }
        printf("\n");
    }
}


int main() {
    int n = 5;  
    printSpiral(n);
    return 0;
}
