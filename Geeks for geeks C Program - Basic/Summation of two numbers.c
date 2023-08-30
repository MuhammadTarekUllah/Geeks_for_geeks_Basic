#include <stdio.h>

int main() {
    
    long double number1, number2, summation ;
    printf ("Enter any two number") ;
    scanf ("%Lf%Lf" , &number1, & number2);
    summation=number1+number2;
    printf (" Summation of your entered number is %Lf" , summation) ;
 
    return 0 ;
}  