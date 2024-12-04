#include <stdio.h>

int main(){
    int num1, num2;
    char op;
    char choice;

    do{

    printf("Basic Calculator: Please enter the 2 numbers you want to process:\n");
    scanf("%d %d", &num1, &num2);

    printf("Basic Calculator: Please enter the operator that you want to use for the process (+, -, *, %, / ONLY)\n");
    scanf(" %c", &op);

    switch (op){
     case '+':
      printf("%d + %d is equal to %d \n",  num1, num2, num1 + num2);
       break;

     case '-':
      printf("%d - %d is equal to %d \n",  num1, num2, num1 - num2);
       break;

     case '*':
      printf("%d * %d is equal to %d \n",  num1, num2, num1 * num2);
       break;

     case '/':
      printf("%d / %d is equal to %d \n",  num1, num2, num1 / num2);
       break;

     case '%':
      printf("%d mod %d is equal to %d \n",  num1,num2 , num1 % num2);
       break;
    
     default:
      printf("Invalid inputs, please try again");
        break;
    }
    
    printf("Do you want to Try again? Y/N \n");
    scanf(" %c", &choice);

    } while (choice == 'Y' || choice == 'y');
   

    return 0;
}