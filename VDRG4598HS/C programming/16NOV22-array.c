#include<stdio.h>
void main()
{
    int size,i,j,high=0,sechigh=0,low=999,seclow=999,c;
    printf("Enter size of array\n");
    scanf("%d",&size);
    int ar[size];
    printf("Enter elements of array\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&ar[i]);
    }
    for(i=0;i<size;i++)
    {
        printf("%d\n",ar[i]);
        if(ar[i]>high)
        {
            high=ar[i];
        }
        if(low>ar[i])
        {
            low=ar[i];
        }
    }
    for(i=0;i<size;i++)
    {
        if(ar[i]>sechigh && high!=ar[i])
        {
            sechigh=ar[i];
        }
        if(seclow>ar[i] && low!=ar[i])
        {
            seclow=ar[i];
        }
    }
    printf("Highest = %d\n",high);
    printf("Second Highest = %d\n",sechigh);
    printf("lowest = %d\n",low);
    printf("Second lowest = %d\n",seclow);
    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(ar[i]>ar[j])
            {
                c=ar[i];
                ar[i]=ar[j];
                ar[j]=c;
            }
        }
    }
    printf("Assending array\n");
    for(i=0;i<size;i++)
    {
        printf("%d\n",ar[i]);
    }
    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(ar[i]<ar[j])
            {
                c=ar[i];
                ar[i]=ar[j];
                ar[j]=c;
            }
        }
    }
    printf("Decending array\n");
    for(i=0;i<size;i++)
    {
        printf("%d\n",ar[i]);
    }
}