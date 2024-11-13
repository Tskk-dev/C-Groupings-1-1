#include   <stdio.h>
#include   <math.h>

void hours2mins(){
  int hours = 0, mins = 60 ,hours2mins; 
  printf("[---------------Hours to Mins Calculator---------------]\n"); 
  printf("pls enter # of hours that you want to convert to mins: ");
  scanf("%d", &hours );

  hours2mins = hours * mins; 
  printf("%d hours is equal to %d mins \n", hours, hours2mins);
  printf("[--------------Made by Juls, Shan & Jasper-------------]\n");

}

int main(){
    hours2mins();
    return 0; 
}