#include "stdio.h"

int main() {
  //Variable init
  int radius = 0;
  float area, circumference, pi = 3.14;
  printf("[-----------------Circle calculator----------------]\n");
  
  printf("Enter the radius: ");
  scanf("%d" , &radius);

  area = pi * radius * radius;
  circumference = 2 * pi * radius;

  printf("The area is %f\n" , area );
  printf("The circumference is %f\n" , circumference );

  printf("[--------------Made by Juls, Shan & Jasper-------------]\n");
  return 0;
};

