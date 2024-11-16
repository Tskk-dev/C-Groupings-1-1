#include <stdio.h>
// Code Made by Jasper James Galang

int main(){
    int n1 = 0, n2 = 0, gcd = 0;

    printf("Enter the first and second number: \n");
    scanf("%d", &n1);
    scanf("%d", &n2);
    
    for(int i = 1; i <= n1 && i <= n2; ++i){
        if(n1 % i == 0 && n2 % i == 0){
            gcd = i;
        }
    }

    printf("The GCD of %d and %d is: %d\n", n1, n2, gcd);
    return 0;
}