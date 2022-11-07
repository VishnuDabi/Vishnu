#include<stdio.h>
#include<conio.h>
void main()
{
    int a=1;
    start:
    printf("hello word %d\n",a);
    
    a=a+1;
   if(a<=10)
   {
    goto start;
   }
}