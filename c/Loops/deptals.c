#include "stdio.h"

int main(){
    int avariable = 1;
    int Avariable = 2;

    printf("%d %d\n Condition 1, 2, 3 = True \n ", avariable, Avariable);
    // QUESTION #1 is TRUE

    int score = 7;
    int min = 60;

    // # 4
    if (score < ((min/2) - 10) || score > 90) {
        printf("Condition 4: True\n");
    } else {
        printf("Condition 4: False\n");
    }

    // ANSWER IS TRUE 

    // # 5
    if (50 + min / score > 60) {
        printf("Condition 5: True\n");
    } else {
        printf("Condition 5: False\n");
    }

    // ANSWER IS FALSE


    // # 6
    if (score < (min /2) - 10 ||  !(score > 90)) {
        printf("Condition 6: True\n");
    } else {
        printf("Condition 6: False\n");
    }

    int temperature = 70;
    int rainfall = 30;
    int humidity = 60;

    // # 7
    if (temperature > 95 || rainfall > 20 && humidity >=60) {
        printf("Condition 7: True\n");
    } else {
        printf("Condition 7: False\n");
    }

    // # 8
    if (! (temperature %3) != 0 || rainfall <= 20 || humidity == 60) {
        printf("Condition 8: True\n");
    } else {
        printf("Condition 8: False\n");
    }

    // # 9
    if (temperature >= humidity && humidity / 2 == rainfall &&  ! ( temperature % 7)) {
        printf("Condition 9: True\n");
    } else {
        printf("Condition 9: False\n");
    }

    int valid_range_start = 10;
    int valid_range_end = 20;

    // #10
    int result = 7 * 2 % 3; 
    if (result >= valid_range_start && result <= valid_range_end) {
        printf("Condition 10: True\n");
    } else {
        printf("Condition 10: False\n");
    }

    // #11
    float number1 = 1.5;
    if (number1 >= valid_range_start && number1 <= valid_range_end) {
        printf("Condition 11: True\n");
    } else {
        printf("Condition 11: False\n");
    }

    // #12
    int number2 = 9;
    if (number2 >= valid_range_start && number2 <= valid_range_end) {
        printf("Condition 12: True\n");
    } else {
        printf("Condition 12: False\n");
    }

    // #13
    printf("Condition 13: False (default is optional)\n");

    // #14
    for (int i = 0, j = 0; i < 3; i++, j++) {
        printf("i = %d, j = %d\n", i, j);
    }
    printf("Condition 14: True\n");

    // #15
    for (int j = 100; j <= 1; j++) {
        printf("This is a test\n");
    }
    printf("Condition 15: False (loop doesn’t execute)\n");

    // # 16
    int A = 5, B = 5;
    if (A = B) { // Assigns B to A, evaluates to true
        printf("Condition 16: False , needs to be '==' instead\n");
    }

    // 17

    printf("Condition 17: The answer is B \n C for one. \n C for all \n");
    // answer is B 

    float a18 = 7.50; 
    float b18 = 9;
    float c18 = b18 + a18;

    printf("Condition 18: (B FLOAT) %f\n", c18); 
    // answer is B


    
    int p = 3;   
    int count = 0;   

    // Original loop
    while (count < 3) {
        p = p * p;  
        printf("%d\n", p);   
        count++;   
    }



    







    return 0;

    // ANSWER IS TRUE


}