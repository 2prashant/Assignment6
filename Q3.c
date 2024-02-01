//3. Write a program to calculate sum of first N odd natural numbers.
#include<stdio.h>
int main()
{
    int num1,num2,sum=0;
    printf("sum of first N odd natural number\n enter number : ");
    scanf("%d",&num2);
    for(num1=0;num1<num2;num1++)
    {
            sum=sum+2*num1+1;   
    }
    printf("\nsum = %d",sum);
    return 0;
}