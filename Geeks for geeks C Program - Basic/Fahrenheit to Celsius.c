#include<stdio.h>  

int main(){ 
    
    long double fahrenheit,celsius;  
    printf ("Enter temperature in farenhite: ");
    scanf ("%Lf",&fahrenheit) ;
    celsius = ((fahrenheit-32)*5)/9;  
    printf("\nYour given temperature in Celsius is : %Lf",celsius);  
    
    return (0);  
}  