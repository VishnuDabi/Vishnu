#include<stdio.h>
void main()
{
    int num,a=1,b=0,sum=0,i;
    printf("Enter A number\n");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        printf("%d,",sum);
        sum=a+b;
        a=b;
        b=sum;
    }

}