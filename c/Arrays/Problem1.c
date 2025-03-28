#include <stdio.h>


void mergeArrays(int arr1[], int arr2[], int n, int m, int merged[], int *mergedSize) {
    int k = 0;
    // Process first array and add unique values.
    for (int i = 0; i < n; i++) {
        int isDuplicate = 0;
        for (int j = 0; j < k; j++) {
            if (merged[j] == arr1[i]) {
                isDuplicate = 1;
                break;
            }
        }
        if (!isDuplicate) {
            merged[k++] = arr1[i];
        }
    }
    // Process second array and add unique values.
    for (int i = 0; i < m; i++) {
        int isDuplicate = 0;
        for (int j = 0; j < k; j++) {
            if (merged[j] == arr2[i]) {
                isDuplicate = 1;
                break;
            }
        }
        if (!isDuplicate) {
            merged[k++] = arr2[i];
        }
    }
    *mergedSize = k;
}

int main() {
    int arrayN[5], arrayB[5];
    int mergeArray[10];  // Maximum possible size is 10 if no duplicates.
    int mergeSize = 0;
    
    printf("PROBLEM 1\n");
    printf("Enter 5 integers for ArrayA:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arrayN[i]);
    }
    
    printf("Enter 5 integers for ArrayB:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arrayB[i]);
    }
    
    // Merge the arrays
    mergeArrays(arrayN, arrayB, 5, 5, mergeArray, &mergeSize);
    
    // Display the arrays.
    printf("\nArrayA      : ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arrayN[i]);
    }
    
    printf("\nArrayB      : ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arrayB[i]);
    }
    
    printf("\nMERGE_ARRAY : ");
    for (int i = 0; i < mergeSize; i++) {
        printf("%d ", mergeArray[i]);
    }
    
    return 0;
}
