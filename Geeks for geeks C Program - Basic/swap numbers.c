#include <stdio.h>
 
int main()
{
    long double number1, number2;
    printf("Enter number1: ");
    scanf("%Lf", &number1);
    printf("\nEnter number2: ");
    scanf("%Lf", &number2);
    
    
    number1= number1 + number2;
    
    number2= number1 - number2;
    
    number1= number1 - number2;
 
    printf("\nAfter swapping number1 = %Lf \nand number2 = %Lf", number1, number2);
    return 0;
}