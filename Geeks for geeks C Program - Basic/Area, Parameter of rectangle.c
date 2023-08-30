#include <stdio.h>

int main (){
    
    long double length, width, parameter, area;
    
    printf("Enter Length of the rectangle: ") ;
    scanf ("%Lf", &length) ;

    printf("\nEnter width of the rectangle: ") ;
    scanf("%Lf", & width) ;

    parameter=(length+width)*2;
    area=(length*width);

    printf("\nArea of the given rectangle is %Lf \nparameter of the given rectangle is %Lf", area, parameter) ;

    return 0;
}
