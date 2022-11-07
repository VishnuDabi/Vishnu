#include<stdio.h>
#include<conio.h>
void main()
{
    int num=0,rem,i,temp=0,num2=0,len=0,sum=0,a,total;
    printf("Enter a number\n");
    scanf("%d",&num);
    temp=num;
    num2=num;
    while(num>0)
    {
        len++;
        num=num/10;
    }
    while (num2>0)
    {
        rem=num2%10;
        sum=sum + pow(rem,len); 
        num2=num2/10;
    }
    if(sum==temp)
    {
        printf("%d is Armstomg number",sum);
    }else
    {
        printf("%d is not Armstomg number",sum);
    }
}