#include<stdio.h>
void main()
{
    int i,j,n=5;
    for( i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i==n)
            {
                printf("*");
            }
            else if(j==1)
            {
                printf("*");
            }
            else if(i==j)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
            
        }
        printf("\n");
    }
}