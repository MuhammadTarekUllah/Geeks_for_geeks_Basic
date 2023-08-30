#include <stdio.h>
 
int main()
{
    int integerType;
    char characterType;
    float floatType;
    double doubleType;
 
    printf("Size of int is: %ld byte",sizeof(integerType));
    
    printf("\nSize of char is: %ld byte",sizeof(characterType));
 
    printf("\nSize of float is: %ld byte",sizeof(floatType));
 
    printf("\nSize of double is: %ld byte",sizeof(doubleType));
 
    return 0;
}