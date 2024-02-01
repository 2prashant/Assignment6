//2. Write a program to calculate sum of first N even natural numbers.
#include<stdio.h>
int main()
{
    int num1,num2,sum=0;
    printf("sum of first N even natural number\n Enter number=");
    scanf("%d",&num2);
    for(num1=1;num1<=num2;num1++)
    {
            sum=sum+2*num1;
    }
    printf("\nsum=%d",sum);
    return 0;

}
