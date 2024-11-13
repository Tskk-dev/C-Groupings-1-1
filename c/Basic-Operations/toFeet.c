#include "stdio.h"

int main(){
  float inputfeet = 0, inch = 0, cent = 0, meter = 0;
  const float inchConst = 12 , centConst = 30.48 , meterConst = 0.3048;
  printf("[--------------------Feet Converter-------------------]\n");

  printf("Please enter the amount of feet to be converted: ");
  scanf("%f" , &inputfeet);

  inch = inputfeet * inchConst;
  cent = inputfeet * centConst;
  meter = inputfeet * meterConst;
 
 printf("%f feet is %f in inches, %f in centimeters and %f in meters \n", inputfeet , inch , cent, meter);
 printf("[--------------Made by Juls, Shan & Jasper-------------]\n");

    return 0;




}