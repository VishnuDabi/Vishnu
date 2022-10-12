#include<stdio.h>
#include<conio.h>
void main()
{
    int age,salary;
    printf("Enter your salary and age");
    scanf("%d %d",&salary , &age);
    if(age<30)
    {
        if(salary>=10000)
        {
            printf("new salary = %d",salary+1000);
        }
        else
        {
            printf("new salary = %d",salary+500);
        }   
    }
    else
    {
        if(salary>=10000)
        {
           printf("new salary = %d",salary+1000);
        }
        else
        {
            printf("new salary = %d",salary+500);
        }
    }
}