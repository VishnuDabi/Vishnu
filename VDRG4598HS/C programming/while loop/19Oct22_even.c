#include<stdio.h>
#include<conio.h>
void main()
{
    int i=1;
    while (i<=100)
    {
        if(i%2==0)
        {
            printf("%d is Even Number\n",i);
        }
        else
        {
            printf("%d is Odd Number\n",i);
        }
        i++;
    }
    
}