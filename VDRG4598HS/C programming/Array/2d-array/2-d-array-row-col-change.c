#include<stdio.h>
#include<conio.h>
void main()
{
    int size,row,col;
    printf("Enter value of size");
    scanf("%d",&size);
    printf("Enter value of row");
    scanf("%d",&row);
    printf("Enter value of col");
    scanf("%d",&col);
    int ar[row][col],i,j,br[row][col];
    for(i=0;i<row;i++)
    {
        for(j=0;j<=col;j++)
        {
            printf("Enetr value of ar[%d][%d]",i,j);
            scanf("%d",&ar[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<row;i++)
    {
        for(j=0;j<=col;j++)
        {
            printf("%d",ar[i][j]);
            br[j][i]=ar[i][j];
        }
    }
    for(i=0;i<row;i++)
    {
        for(j=0;j<=col;j++)
        {
           printf("%d",br[j][i]);
        }
        printf("\n");
    }



}