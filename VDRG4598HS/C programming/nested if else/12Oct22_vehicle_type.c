#include<stdio.h>
#include<conio.h>
void main()
{
    int t;
    printf("Enter Number of Tyres");
    scanf("%d",&t);
    if(t<=4)
    {
        if(t<=1)
        {
            printf("Invalid");
        }
        else if(t==2)
        {
            printf("Two wheeler");
        }
        else if(t==3)
        {
            printf("Auto");
        }
        else
        {
            printf("car or four Wheeler");
        }
    }
    else
    {
        if(t>=5)
        {
            if(t%2!=0)
            {
                printf("invalid");
            }
            else
            {
                printf("Heavy vehicles");
            }
        }
    }
}