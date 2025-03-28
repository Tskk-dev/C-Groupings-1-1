#include <stdio.h>
#include <stdlib.h>


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


void bubbleSort(int arr[], int size, int ascending) {
    for (int i = 0; i < size - 1; i++){
        for (int j = 0; j < size - i - 1; j++){
            // Compare and swap based on order.
            if (ascending ? (arr[j] > arr[j+1]) : (arr[j] < arr[j+1])) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

void selectionSort(int arr[], int size, int ascending) {
    for (int i = 0; i < size - 1; i++){
        int selectedIndex = i;
        for (int j = i+1; j < size; j++){
            // For ascending, select the smallest; for descending, the largest.
            if (ascending ? (arr[j] < arr[selectedIndex]) : (arr[j] > arr[selectedIndex])) {
                selectedIndex = j;
            }
        }
        if(selectedIndex != i) {
            int temp = arr[i];
            arr[i] = arr[selectedIndex];
            arr[selectedIndex] = temp;
        }
    }
}


int binarySearch(int arr[], int size, int target) {
    int low = 0, high = size - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target)
            return mid;
        else if (arr[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

void findMinMax(int arr[], int size, int *min, int *max) {
    *min = *max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < *min)
            *min = arr[i];
        if (arr[i] > *max)
            *max = arr[i];
    }
}

int main() {
    int arrayN[5], arrayB[5];
    int mergeArray[10];
    int mergeSize = 0;
    char repeat;
    
    do {
        // Input arrays
        printf("PROBLEM 1\n");
        printf("Enter 5 integers for ArrayN:\n");
        for (int i = 0; i < 5; i++) {
            scanf("%d", &arrayN[i]);
        }
        
        printf("Enter 5 integers for ArrayB:\n");
        for (int i = 0; i < 5; i++) {
            scanf("%d", &arrayB[i]);
        }
        
        // Merge the arrays and display them.
        mergeArrays(arrayN, arrayB, 5, 5, mergeArray, &mergeSize);
        printf("\nArrayN      : ");
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
        printf("\n\n");
        
        // Ask the user whether they want to SEARCH or SORT
        int option;
        printf("Choose an option:\n");
        printf("1. SEARCH\n");
        printf("2. SORT\n");
        scanf("%d", &option);
        
        if (option == 1) { // SEARCH option
            int searchOption;
            printf("Choose search type:\n");
            printf("1. LINEAR (Find minimum and maximum values)\n");
            printf("2. BINARY (Search for a number in a sorted array)\n");
            scanf("%d", &searchOption);
            
            if (searchOption == 1) { // Linear search to find min and max
                if (mergeSize == 0) {
                    printf("Merged array is empty.\n");
                } else {
                    int min, max;
                    findMinMax(mergeArray, mergeSize, &min, &max);
                    printf("Minimum value in merged array: %d\n", min);
                    printf("Maximum value in merged array: %d\n", max);
                }
            } else if (searchOption == 2) { // Binary search
                // Sort the merged array in ascending order using bubble sort.
                bubbleSort(mergeArray, mergeSize, 1);
                printf("Merged array after sorting (ascending order): ");
                for (int i = 0; i < mergeSize; i++) {
                    printf("%d ", mergeArray[i]);
                }
                printf("\n");
                
                int target;
                printf("Enter a number to search in the merged array: ");
                scanf("%d", &target);
                int pos = binarySearch(mergeArray, mergeSize, target);
                if (pos != -1) {
                    printf("Number %d found at index %d in the sorted merged array.\n", target, pos);
                } else {
                    printf("Number %d not found in the merged array.\n", target);
                }
            } else {
                printf("Invalid search option.\n");
            }
            
        } else if (option == 2) { // SORT option
            int sortOption, orderOption;
            printf("Choose sorting algorithm:\n");
            printf("1. Bubble Sort\n");
            printf("2. Selection Sort\n");
            scanf("%d", &sortOption);
            
            printf("Choose order:\n");
            printf("1. Ascending\n");
            printf("2. Descending\n");
            scanf("%d", &orderOption);
            
            // Create a copy of mergeArray to sort, preserving the original mergeArray.
            int sortArray[10];
            for (int i = 0; i < mergeSize; i++) {
                sortArray[i] = mergeArray[i];
            }
            
            // Use the selected sorting algorithm with the specified order.
            if (sortOption == 1) { // Bubble Sort
                bubbleSort(sortArray, mergeSize, (orderOption == 1));
            } else if (sortOption == 2) { // Selection Sort
                selectionSort(sortArray, mergeSize, (orderOption == 1));
            } else {
                printf("Invalid sorting algorithm option.\n");
                continue;
            }
            
            printf("Sorted array: ");
            for (int i = 0; i < mergeSize; i++) {
                printf("%d ", sortArray[i]);
            }
            printf("\n");
            
        } else {
            printf("Invalid option selected.\n");
        }
        
        // Ask if the user wants to repeat the process.
        printf("\nDo you want to repeat the process? (y/n): ");
        scanf(" %c", &repeat);  
        printf("\n----------------------------------------\n");
        
    } while (repeat == 'y' || repeat == 'Y');
    
    printf("Program terminated.\n");
    return 0;
}
