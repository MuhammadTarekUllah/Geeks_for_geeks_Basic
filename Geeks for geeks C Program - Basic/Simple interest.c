#include<stdio.h>
int main()
{
   long double principal,rate,timE,interest;
   printf("Enter the Principal, Rate and Time\n");
   scanf("%Lf %Lf %Lf",&principal,&rate,&timE);



   interest=principal*rate*timE/100;       

   printf("simple interest is : %Lf",interest);
}