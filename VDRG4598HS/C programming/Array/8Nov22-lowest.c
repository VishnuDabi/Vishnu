#include<stdio.h>
#include<conio.h>
void main()
{
    int size,i,lowest=99;
    printf("Enter size of array");
    scanf("%d",&size);
    int a[size];
    printf("Enter %d elements\n",size);
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<size;i++)
    {
        if(lowest>a[i])
        {
            lowest=a[i];
        }
    }
    printf("lowest array element = %d\n",lowest);
}