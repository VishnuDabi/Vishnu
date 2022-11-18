#include<stdio.h>
void main()
{
    int i,j,k,num=5;
    for(i=1;i<num;i++)
    {
        for(k=0;k<num-i;k++)
        {
            printf(" ");
        }
        for(j=1;j<=2*i-1;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}