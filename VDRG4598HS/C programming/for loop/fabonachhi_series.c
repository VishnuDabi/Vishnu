#include<stdio.h>
#include<conio.h>
void main()
{
    int a=1,b=0,c=0,ch,i;
    printf("Enter Your choice");
    scanf("%d",&ch);
    for(i=1;i<=ch;i++)
    {
        printf("%d ,",c);
        c=a+b;
        a=b;
        b=c;
    }
}