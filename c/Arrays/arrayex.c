#include <stdio.h>

float getTotal(float arr[], int size);
char *getPerformance(float totalSales);

int main() {
    int size = 7;
    float arr[7];
    printf("Enter the sales for the week:\n");

    for (int i = 0; i < size; i++) {
        printf("Day %d: ", i + 1);
        scanf("%f", &arr[i]);
    }

    float totalSales = getTotal(arr, size);
    printf("Your total sales: %.2f\n", totalSales);
    printf("Your performance: %s\n", getPerformance(totalSales));

    return 0;
}

float getTotal(float arr[], int size) {
    float total = 0.0;

    for (int i = 0; i < size; i++) {
        total += arr[i];
    }
    return total;
}

char *getPerformance(float totalSales) {
    if (totalSales > 50000) {
        return "Excellent Performance";
    } else if (totalSales < 20000) {
        return "Okay Performance";
    } else {
        return "Mid Performance";
    }
}
