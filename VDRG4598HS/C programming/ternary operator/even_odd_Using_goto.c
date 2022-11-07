#include<stdio.h>
#include<conio.h>
void mian()
{
    int num,a;
    start:
    printf("Enter a number \n");
    scanf("%d",&num);
    if(num%2==0)
    {
        printf("%d is even number",num);
    }
    else
    {
        printf("%d is odd number",num);
    }
    printf("For continue Press 1 & for Exit Press any key");
    scanf("%d",&a);
    if(a==1)
    {
        goto start;
    }
}
