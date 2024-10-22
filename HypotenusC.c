#include "math.h"
#include "stdio.h"

int main() {
  //Variable init
  int numA, numB, numC;
  printf("[-----------------Hypothenus calculator----------------]\n");
  
  printf("Enter Side A: ");
  scanf("%f" , &numA);
  printf("Enter Side B: ");
  scanf("%f" , &numB);

  numC = sqrt((numA*numA) + (numB*numB));

  printf("The hypotenuse is %f\n" , numC );

  printf("[--------------Made by Juls, Shan & Jasper-------------]\n");
  return 0;


}; 