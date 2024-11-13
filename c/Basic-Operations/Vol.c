#include "stdio.h"

int main(){
    int vol , length, width , height;
    printf("[------------------------Volume calculator-----------------------]\n");
    printf("Enter the length: ");
    scanf("%d" , &length);
    printf("Enter the width: ");
    scanf("%d" , &width);
    printf("Enter the height: ");
    scanf("%d" , &height);
    vol = length * width * height;
    printf("The volume is %d\n" , vol );
    printf("[--------------Made by Juls, Shan & Jasper-------------]\n");
    return 0;
    


}