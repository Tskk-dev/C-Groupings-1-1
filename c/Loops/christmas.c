#include <stdio.h>

int main() {
    int days = 12;
    int gifts_per_day[12];
    int total_gifts = 0;


    for (int i = 0; i < days; i++) {
        gifts_per_day[i] = (i + 1) * (i + 2) / 2;  
    }

 
    printf("Gifts received each day:\n");
    for (int i = 0; i < days; i++) {
        printf("Day %d: %d gifts | Cumulative Total: %d\n", 
               i + 1, 
               gifts_per_day[i], 
               total_gifts += gifts_per_day[i]);
    }

    printf("\nTotal gifts received over 12 days: %d\n", total_gifts);

    return 0;
}



