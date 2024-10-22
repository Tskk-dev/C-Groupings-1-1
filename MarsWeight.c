#include "stdio.h"


int main (){

    const float marsConstant = 0.38 , jupiterConstant = 2.64;
    float earthWeight = 0 , marsWeight = 0 , jupiterWeight = 0;

    printf("[----------------Weight on Mars & Jupiter---------------]\n");
    printf("Enter your weight on Earth: ");
    scanf("%f" , &earthWeight);

    marsWeight = earthWeight * marsConstant;
    jupiterWeight = earthWeight * jupiterConstant;

    printf("your earth weight which is %f100 is %f on Mars while on jupiter its %f" ,earthWeight, marsWeight ,jupiterWeight );
     printf("[--------------Made by Juls, Shan & Jasper-------------]\n");
    return 0;
}