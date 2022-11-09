#include<stdio.h>
#include<conio.h>
void main()
{
    int size,i,j,c;
    printf("Enter Size\n");
    scanf("%d",&size);
    int ar[size];
    printf("Enter %d element of Array\n",size);
    for( i=0;i<size;i++)
    {
        scanf("%d",&ar[i]);
    }
    for(i=0;i<size;i++)
    {
        printf("Array element %d = %d\n",i+1,ar[i]);
    }
    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(ar[j]<ar[i])
            {
                c=ar[j];
                ar[j]=ar[i];
                ar[i]=c;
            }
        }
    }
    for(i=0;i<size;i++)
    {
        printf("Array = %d\n",ar[i]);
    }
}