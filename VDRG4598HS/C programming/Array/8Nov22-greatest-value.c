#include<stdio.h>
#include<conio.h>
void main()
{
    int size,i,highest=0;
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
        if(highest<a[i])
        {
            highest=a[i];
        }
    }
    printf("highest array element = %d\n",highest);
}