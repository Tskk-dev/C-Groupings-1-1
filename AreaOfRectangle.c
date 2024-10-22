#include "stdio.h"

int main (){
    printf("[------------------------Area-con-----------------------]\n");

    float recA = 0, triA = 0, base = 0, height = 0; 
    printf("Please enter the Base of the Rectangle & Triangle: ");
    scanf("%f" , &base);
    printf("Please enter the height of the Rectangle & Triangle: ");
    scanf("%f" , &height);

    recA = base * height;
    triA = 0.5 * base * height;

    printf("The area of a triangle and a square with a base of %f and a height of %f is %f for the rectangle \n and %f for the triangle respectively ", base, height ,recA,triA);
    printf("[--------------Made by Juls, Shan & Jasper-------------]\n");
    return 0;
    




}