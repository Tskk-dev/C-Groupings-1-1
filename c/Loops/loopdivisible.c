#include <stdio.h>

int main() {
    int n1, n2, m;
    int count = 0;


    printf("Enter the starting number (n1): ");
    scanf("%d", &n1);
    printf("Enter the ending number (n2): ");
    scanf("%d", &n2);
    printf("Enter the divisor (m): ");
    scanf("%d", &m);

    printf("Numbers divisible by %d from %d to %d are:\n", m, n1, n2);


    for (int i = n1; i <= n2; i++) {
        if (i % m == 0) { // Check if i is divisible by m
            printf("%d ", i);
            count++;
        }
    }

  
    printf("\nCount of numbers divisible by %d: %d\n", m, count);

    return 0;
}
