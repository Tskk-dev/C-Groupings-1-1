#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

void fibo() {
    int rabbit[13];
    rabbit[0] = 0;
    rabbit[1] = 1;
    
    for(int i = 2; i <= 12; i++) {
        rabbit[i] = rabbit[i-1] + rabbit[i-2];
    }
    
    printf("\nRABBIT array per month (pairs): ");
    for(int i = 0; i <= 12; i++) {
        printf("%d ", rabbit[i]);
    }
    printf("\nTotal number of rabbit pairs after a year: %d", rabbit[12]);
    printf("\nTotal rabbits (assuming 2 per pair): %d\n\n", rabbit[12] * 2);
}

void military_time() {
    char input[10];
    int valid = 1;
    int time;
    
    printf("\nInput time in military format: ");
    fgets(input, sizeof(input), stdin);
    
    // Handle input overflow
    if(strchr(input, '\n') == NULL) {
        int c;
        while((c = getchar()) != '\n' && c != EOF);
        valid = 0;
    } else {
        input[strcspn(input, "\n")] = '\0';
    }
    
    // Validate digits and length
    for(int i = 0; input[i] != '\0'; i++) {
        if(!isdigit(input[i]) || strlen(input) > 4) {
            valid = 0;
            break;
        }
    }
    
    if(!valid) {
        printf("INVALID TIME\n");
        return;
    }
    
    time = atoi(input);
    if(time < 0 || time > 2400) {
        printf("INVALID TIME\n");
        return;
    }
    
    int hours = time / 100;
    int minutes = time % 100;
    
    if(hours >= 24 || minutes >= 60) {
        printf("INVALID TIME\n");
        return;
    }
    
    // Convert to 12-hour format
    int twelve_hr;
    char *period;
    
    if(hours == 0) {
        twelve_hr = 12;
        period = "AM";
    } else if(hours < 12) {
        twelve_hr = hours;
        period = "AM";
    } else if(hours == 12) {
        twelve_hr = 12;
        period = "PM";
    } else {
        twelve_hr = hours - 12;
        period = "PM";
    }
    
    printf("Converted time: %d:%02d%s\n", twelve_hr, minutes, period);
}

int main() {
    char choice;
    char repeat;
    int c;
    
    do {
        printf("\n===== Program Menu =====");
        printf("\nA: Fibonacci Rabbit Calculator");
        printf("\nB: Military Time Converter");
        printf("\nC: Exit Program");
        printf("\nEnter your choice (A/B/C): ");
        
        scanf(" %c", &choice);
        while((c = getchar()) != '\n' && c != EOF); // Clear buffer
        
        switch(toupper(choice)) {
            case 'A':
                fibo();
                break;
            case 'B':
                military_time();
                break;
            case 'C':
                printf("Exiting program. Goodbye!\n");
                return 0;
            default:
                printf("Invalid choice! Please enter A, B, or C.\n");
                continue;
        }
        
        printf("Would you like to try another program? (Y/N): ");
        scanf(" %c", &repeat);
        while((c = getchar()) != '\n' && c != EOF); // Clear buffer
        
    } while(toupper(repeat) == 'Y');
    
    printf("Exiting program. Goodbye!\n");
    return 0;
}