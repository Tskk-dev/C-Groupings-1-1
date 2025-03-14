#include "stdio.h"


void matrixMultiply(int A[], int B[3][3], int C[]) {
    for (int i = 0; i < 3; i++) {
        C[i] = A[0] * B[i][0] + A[1] * B[i][1] + A[2] * B[i][2];
    }
}

int main(){
        int arrayA[3];
        int matrixB[3][3];
        int arrayC[3];
        
        printf("\n\nPROBLEM 2: Matrix Algebra Operation\n");
        printf("Enter 3 integers for ArrayA:\n");
        for (int i = 0; i < 3; i++) {
            scanf("%d", &arrayA[i]);
        }
        
        printf("Enter 9 integers for ArrayB (3x3 matrix):\n");
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                scanf("%d", &matrixB[i][j]);
            }
        }
        
        matrixMultiply(arrayA, matrixB, arrayC);
        
        // Display the results.
        printf("\nArrayA : ");
        for (int i = 0; i < 3; i++) {
            printf("%d ", arrayA[i]);
        }
        
        printf("\nArrayB :\n");
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                printf("%d ", matrixB[i][j]);
            }
            printf("\n");
        }
        
        printf("Array_C: ");
        for (int i = 0; i < 3; i++) {
            printf("%d ", arrayC[i]);
        }
        
        return 0;
    }