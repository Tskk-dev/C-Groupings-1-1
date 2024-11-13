
#include <stdio.h>

int main() {
    // Constants
    const int BUCKET_CAPACITY = 2452;  
    const int LEAK_RATE = 162;         
    const int CAT_DRINKS = 28;         
    

    int current_drops = 0;
    int cat_total_drinks = 0;
    int hours = 0;
    

    int max_hours = (BUCKET_CAPACITY / LEAK_RATE) * 2;  
    
    
    for(hours = 0; hours <= max_hours; hours++) {
       
        current_drops += LEAK_RATE;
        if(hours % 3 == 0) {
            current_drops -= CAT_DRINKS;
            cat_total_drinks += CAT_DRINKS;
        }
        
     
        if(current_drops >= BUCKET_CAPACITY) {
            break;
        }
    }
    
    
    int total_leaked = hours * LEAK_RATE;
    int final_bucket = total_leaked - cat_total_drinks;
    
    
    printf("Time taken to fill the bucket: %d hours\n", hours);
    printf("Total drops of wine the cat drank: %d drops\n", cat_total_drinks);
    printf("Total wine leaked from barrel: %d drops\n", total_leaked);
    printf("Wine in bucket at the end: %d drops\n", final_bucket);
    printf("Number of times the cat drank: %d\n", hours / 3);
    
    return 0;
}



