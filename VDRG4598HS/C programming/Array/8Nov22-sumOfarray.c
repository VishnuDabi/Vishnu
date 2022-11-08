#include<stdio.h>
#include<conio.h>
void main()
{
    int size,i,sum=0;
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
        sum=sum+a[i];
    }
    printf("Sum of array element = %d\n",sum);
}