// 6. Write a program to calculate factorial of a number.
#include<stdio.h>
int main()
{
    int num1,num2,factor=1;
    printf("calculate factorial of a number\n enter numer=");
    scanf("%d",&num2);
    if(num2==0 || num2==1)
    {
        printf("Factorial= 1");
    }
    else
    {
       for(num1=1;num1<=num2;num1++)
       {
    
           factor=factor*num1;
       }
      printf("factorial=%d",factor);
    }
    return 0;
}