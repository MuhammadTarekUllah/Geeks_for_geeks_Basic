#include <stdio.h>
 

int main()
{
    char character;
    printf("Enter any Character: ");
    scanf("%c",&character);
    printf("The ASCII value of %c is %d", character, character);
    return 0;
}