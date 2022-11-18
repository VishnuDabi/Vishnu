#include<stdio.h>
void main()
{
    int i,j;
    for(i=1;i<=100;i++)
    {
        if(i<2)
        {
            printf("%d is not prime number \n",i);
        }
        else
        {
            for(j=2;j<i;j++)
            {
                if(i%j==0)
                {
                    printf("%d is not prime number\n",i);
                    break;
                }

            }
            if(i==j)
            {
                printf("%d is prime number\n",i);
            }
        }
    }
}
    