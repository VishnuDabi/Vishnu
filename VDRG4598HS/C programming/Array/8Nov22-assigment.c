#include<stdio.h>
#include<conio.h>
void main()
{
    int size,i,highest=0,sh=0,l=99,sl=99,even_c=0,odd_c=0;
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
        if(a[i]%2==0)
        {
            printf("%d is even\n",a[i]);
            even_c++;
        }
        else
        {
            printf("%d is odd\n",a[i]);
            odd_c++;
        }
        if(highest<a[i])
        {
            highest=a[i];
        }
        if(l>a[i])
        {
            l=a[i];
        }
    }
    for(i=0;i<size;i++)
    {
        if(sh<a[i] && highest!=a[i])
        {
            sh=a[i];
        }
        if(sl>a[i] && l!=a[i])
        {
            sl=a[i];
        }
    }
    printf("highest array element = %d\n",highest);
    printf("Second highest array element = %d\n",sh);
    printf("lowest array element = %d\n",l);
    printf("second lowest array element = %d\n",sl);
    printf("total even number = %d\n",even_c);
    printf("total odd number = %d\n",odd_c);
}