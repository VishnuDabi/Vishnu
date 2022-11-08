#include<stdio.h>
#include<conio.h>
void main()
{
    int num,rem,rev=0;
    printf("Enter a number");
    scanf("%d",&num);
    while(num>0)
    {
        rem=num%10;
        rev=10*rev+rem;
        num=num/10;
    }
    printf("Revese = %d",rev);
}