#include <stdio.h>

int main(){
    
    int number, initial_number, count;
    printf("Enter any integer number: ");
    scanf("%d",&number);
    
   for(initial_number=1;initial_number<=number;++initial_number){   
        if(number%initial_number==0){
            count++;
        }
    }
    if(count==2){
        printf("%d is a prime number ",number );
        
    }
    else
        printf("%d is not a prime number ", number);
    
} 

 