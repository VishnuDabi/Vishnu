#include<stdio.h>
#include<conio.h>
void main()
{
    int ch,i;
    printf("Enter Your choice");
    scanf("%d",&ch);
    for(i=2;i<ch;i++)
    {
        if(ch%i==0)
        {
            break;
        }
    }
    if(i==ch)
    {
        prinf("%d is prime Number ",ch);
    }
    else
    {
        prinf("%d is not a prime Number ",ch);
    }
}