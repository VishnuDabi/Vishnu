#include<stdio.h>
#include<conio.h>
void main()
{
    int amount,gst;
    float t,sum;
    printf("Enter amount");
    scanf("%d",&amount);
    printf("Enter gst Rate \n");
    scanf("%d",&gst);
    t=(amount*gst)/100;
    printf("GST = %f\n", t);
    sum=t+amount;
    printf("Total Amount with GST = %f\n",sum);
}