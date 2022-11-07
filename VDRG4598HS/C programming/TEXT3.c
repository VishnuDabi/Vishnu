#include<stdio.h>
#include<conio.h>
void main()
{
    int current_pwd=12345,pwd2,newPass;
    printf("Enter current Password \n");
    scanf("%d",&pwd2);
    if(pwd2==current_pwd)
    {
        printf("Enter Your New Password\n");
        scanf("%d",&newPass);
    }
    else
    {
        printf("Wrong current Password ");
    }
}