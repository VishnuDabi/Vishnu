#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b;
    printf("Enter value of a and b \n");
    scanf("%d %d",&a,&b);
    (a>b)? printf("%d is greater then %d ",a ,b): printf(" %d is greater then %d ",b ,a);

}