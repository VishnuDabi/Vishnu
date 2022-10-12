#include<stdio.h>
#include<conio.h>
void main()
{
    int h,e,m,p,c,sum;
    float per;
    printf("Enter Marks of Hindi , English, chemestry,Phisics,Math\n");
    // scanf("%d,%d,%d,%d,%d",&h,&e,&c,&p,&m);
    scanf("%d",&h);
    scanf("%d",&e);
    scanf("%d",&c);
    scanf("%d",&p);
    scanf("%d\n",&m);
    // printf("%d,%d,%d,%d,%d",h,e,p,c,m);
    if((h>=36 && e>=36) && ((c>=36 && p>=36) && m>=36))
    {
        sum=h+e+p+c+m;
        per=sum/5;
        if(per<=99 && per>=91)
        {
            printf("A+ grade");
        }
        else if(per<=90 && per>=81)
        {
            printf("A grade");
        }
        else if(per<=80 && per>=71)
        {
            printf("B grade");
        }
        else if(per<=70 && per>=61)
        {
            printf("B+ grade");
        }
        else if(per<=60 && per>=51)
        {
            printf("C grade");
        }
        else if(per<=50 && per>=36)
        {
            printf("C+ grade");
        }
        else
        {
            printf("Fail");
        }
    }
    else
    {
        printf("Fail");
    }
}