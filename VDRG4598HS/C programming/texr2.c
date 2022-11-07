#include<stdio.h>
#include<conio.h>
void main()
{
    float originalRateGst,gst_amount,originalAmount,TotalAmount,gst;
    printf("Enter Total Amount\n");
    scanf("%f",&TotalAmount);
    printf("Enter gst rate\n");
    scanf("%f",&gst);
    originalAmount=(TotalAmount/((gst/100)+1));
    printf("Amount Without gst amount = %f\n",originalAmount);
    gst_amount=TotalAmount-originalAmount;
    printf("Gst on product = %f\n",gst_amount);
    
}   