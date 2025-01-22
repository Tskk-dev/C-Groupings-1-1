#include "stdio.h"

int main(){
    int days[7];
    int total = 0, mostSales = 0;

    for(int i = 0; i < 7 ; i++){
        printf("Enter the number of sales for day %d: ", i+1 );
        scanf("%d", &days[i]);
    }
      for(int i = 0; i < 7 ; i++){
        if (days[i] < days[mostSales])
        {
           mostSales = i;
        }
        
    
    }
       for(int i = 0; i < 7 ; i++){
        total += days[i];
       }

      
  
    printf("The total number of sales for the week is %d\n", total);
    printf("The least number of sales for a day is %d on day %d\n", days[mostSales], mostSales+1);

 
}