#include<stdio.h>
#include<conio.h>
void main()
{
    int size,i;
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
        printf("array element = %d\n",a[i]);
    }
}