#include <stdio.h>
void main()
{
    int r, c, i, j,m,n;
    printf("Enter value of rows and col\n");
    scanf("%d%d", &r, &c);
    int ar[r][c];
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("Enter value of array ar[%d][%d]", i, j);
            scanf("%d", &ar[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            for (m = 0; m < r; m++)
            {
                for (n= 0; n < c; n++)
                {
                    if(ar[i][j]<ar[m][n])
                    {
                        int c=ar[i][j];
                        ar[i][j]=ar[m][n];
                        ar[m][n]=c;
                    }
                }
            }
        }
    }
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d,",ar[i][j]);
        }
        printf("\n");
    }
}