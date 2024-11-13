
#include <stdio.h>

int main() {
    int num;
    long long product = 1;

    printf("Enter numbers (press space after entering a number, if you wanna end input, input a zero):\n");
    while (1) {

        if (scanf("%d", &num) != 1) { // validation for when the user inputs a non-integer value
            break;  
        }

        if (num == 0) {
            break;  
        }

        if (num > 0) {
            product *= num;  
        }
    } // ok na po?
 
    printf("The product of the positive numbers is: %lld\n", product);

    return 0;
} // ako din daw po magshashare next na code 