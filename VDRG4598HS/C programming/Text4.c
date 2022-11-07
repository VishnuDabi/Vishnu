#include<stdio.h>
#include<conio.h>
void main()
{
    int amount;
    float dis;
    printf("Enter Total Amount\n");
    scanf("%d",&amount);
    if(amount>=10000)
    {
        dis=(amount*5)/100;
        printf("Discount Amount = %f \n",dis);
        printf("Net amount To pay = %f \n ",amount - dis);
    }
    else
    {
        dis=(amount*2)/100;
        printf("Discount Amount = %f ",dis);
        printf("Net amount To pay = %f ",amount - dis);
    }
}