#include <stdio.h>
#include <math.h>
int main()
{
    long double principle, rate, timE, compound_interest;

    
    printf("Enter principle amount: ");
    scanf("%Lf", &principle);

    printf("Enter time: ");
    scanf("%Lf", &timE);

    printf("Enter rate: ");
    scanf("%Lf", &rate);

    
    compound_interest = principle* (pow((1 + rate / 100), timE));

    
    printf("Compound Interest = %Lf", compound_interest);

    return 0;} 