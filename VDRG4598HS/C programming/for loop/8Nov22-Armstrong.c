#include<stdio.h>
#include<math.h>
void main()
{
    int num=0,i,temp=0,num2=0,sum=0,a,f;
    int rem,len=0;
    printf("Enter number\n");
    scanf("%d",&num);
    temp=num;
    num2=num;
    while(num>0)
    {
        len++;
        num=num/10;
    }
    printf("length = %d\n",len);
    while(num2>0)
    {
        rem=num2%10;
        a=len;
        f=1;
        for(i=1;i<=a;i++)
        {
            f=f*rem;
        }
        sum=sum + f; 
        num2=num2/10;
        printf("sum = %d\n",sum);
    }
    if(sum==temp)
    {
        printf("%d is Armstomg number %d\n",sum,temp);
    }else
    {
        printf("%d is not Armstomg number %d\n",sum,temp);
    }
}