#include<stdio.h>
#include<math.h>
void main()
{
    int num,num2,arm_num,i,temp,fact=1,rem,len=0,arm,palindrom=0,sum=0,highest=0,lowest=9,even_count=0,odd_count=0;
    printf("Enter a number\n");
    scanf("%d",&num);
    
    for(i=1;i<=num;i++)
    {
        fact=fact*i;
    }
    printf("factorial of %d = %d\n",num,fact);
    printf("Enter A number \n");
    scanf("%d",&num2);
    temp=num2;
    arm=num2;
    while(num2>0)
    {
        rem=num2%10;
        if(highest<rem)
        {
            rem=highest;
        }
        if(lowest>rem)
        {
            lowest=rem;
        }
        if(rem%2==0)
        {
            printf("%d number is even\n",rem);
            even_count++;
        }
        else
        {
            printf("%d number is odd\n",rem);
            odd_count++;
        }
        palindrom=palindrom*10+rem;
        num2=num2/10;
        len++;
    }
    while(arm>0)
    {
        rem=arm%10;
        sum=sum+pow(rem,len);
        arm=arm/10;
        // printf("%d\n",sum);
    }
    printf("Length = %d\n",len);
    printf("Total even = %d\n",even_count);
    printf("Total odd = %d\n",odd_count);
    printf("Revesrse of number = %d\n",palindrom);
    if(palindrom==temp)
    {
        printf("%d is Palindrome number\n",temp);
    }
    else
    {
        printf("%d is not Palindrome number\n",temp);
    }
    printf("Armstong sum = %d \n",sum);
    if(sum==temp)
    {
        printf("%d number is amstong number\n",temp);
    }
    else
    {
        printf("%d number is not amstong number\n",temp);
    }
}