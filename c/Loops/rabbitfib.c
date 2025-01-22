#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>


#define months 12 


void fibo(int rabbit[]) {
    rabbit[0] = 1; // Initial male rabbit
    rabbit[1] = 1; // Initial female rabbit

   
    for (int i = 2; i < months; i++) {
        rabbit[i] = rabbit[i - 1] + rabbit[i - 2];
    }
}

int main() {
    int RABBIT[months];
    int total = 0;

    
    fibo(RABBIT);
    for (int i = 0; i < months; i++) { 
        total += RABBIT[i];

        // rabbit + 1a rabbit 1b = total = 2
        // total = 

       // 0 1 1 2 3 
    }

  
    printf("Rabbits per month:\n");
    for (int i = 0; i < months; i++) {
        printf("Month %d: %d rabbits\n", i + 1, RABBIT[i]);
        Sleep(500);
    }

    return 0;
}