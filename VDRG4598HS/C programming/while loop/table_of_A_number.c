#include<stdio.h>
#include<conio.h>
void main()
{
    int num,i=1,t;
    printf("Enter a Number for Table\n");
    scanf("%d",&num);
    while(i<=10)
    {  
        t=num*i;
        printf("%d * %d = %d\n",num,i,t);
        i++;
    }
}