#include <stdio.h>
 
int main()
{
    long double number1, number2, multiplication;
    printf("Enter two number: ");
    scanf("%Lf%Lf",&number1,&number2);
    multiplication=number1*number2;
 
    
    printf("Multiplication of your given numbers is: %Lf", &multiplication );
 
    return 0;
}