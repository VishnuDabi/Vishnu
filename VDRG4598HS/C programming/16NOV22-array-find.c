#include<stdio.h>
int main()
{
    int size,i,j,c,t=0;
    printf("Enter size of array\n");
    scanf("%d",&size);
    int ar[size];
    printf("Enter elements of array\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&ar[i]);
    }
    printf("Enter a number to find in array\n");
    scanf("%d",&c);
    for(i=0;i<size;i++)
    {
        if(ar[i]==c)
        {
            printf("Number present in array\n");
            printf("Indexing = %d\n",i);
            t++;
        }

    }
    if(t==0)
    {
        printf("Number not present in array\n");
    }
}