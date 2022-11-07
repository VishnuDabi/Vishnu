#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c,d;
    printf("Enter value of a,b and c \n");
    scanf("%d %d %d",&a,&b,&c);
    (a>b && a>c)? printf("%d is greatest Number ",a) : ((c>b)? printf("%d is greater Number",c) : printf("%d is greater Number",b));;

}