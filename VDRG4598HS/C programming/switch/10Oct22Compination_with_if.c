#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,ch,r;
    printf("Press 1 for Addition\n");
    printf("Press 2 for Subtraction\n");
    printf("Press 3 for Multiplication\n");
    printf("Press 4 for Divide\n");
    printf("Press 5 for Even, Odd\n");
    printf("Press 6 for Greater Number\n");
    printf("Press 7 for Lowest Number\n");
    printf("Press 8 for Leap Year\n");
    printf("Press 9 for Positive And Negative\n");
    printf("Enter your choice\n");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
            printf("Enter First Number ");
            scanf("%d",&a);
            printf("Enter Second Number ");
            scanf("%d",&b);
            r=a+b;
            printf("Addition Of %d and %d = %d",a,b,r);
            break;
        case 2:
            printf("Enter First Number ");
            scanf("%d",&a);
            printf("Enter Second Number ");
            scanf("%d",&b);
            r=a-b;
            printf("Subtraction Of %d and %d = %d",a,b,r);
            break;
        case 3:
            printf("Enter First Number ");
            scanf("%d",&a);
            printf("Enter Second Number ");
            scanf("%d",&b);
            r=a*b;
            printf("Multiplication Of %d and %d = %d",a,b,r);
            break;
        case 4:
            printf("Enter First Number ");
            scanf("%d",&a);
            printf("Enter Second Number ");
            scanf("%d",&b);
            r=a/b;
            printf("Division Of %d and %d = %d",a,b,r);
            break;
        case 5:
            printf("Enter a Number ");
            scanf("%d",&a);
            if(a%2==0)
            {
                printf("%d is Even Number",a);
            }
            else
            {
                printf("%d is odd Number",a);
            }
            break;
        case 6:
            printf("Enter First Number ");
            scanf("%d",&a);
            printf("Enter Second Number ");
            scanf("%d",b);
            if(a>b)
            {
                printf("%d is greater then %d",a,b);
            }
            else
            {
                printf("%d is greater then %d",b,a);
            }
            break;
        case 7:
            printf("Enter First Number ");
            scanf("%d",&a);
            printf("Enter Second Number ");
            scanf("%d",&b);
            if(a<b)
            {
                printf("Lowest Number = %d",a);
            }
            else
            {
                printf("Lowest Number = %d",a);
            }
            break;
        case 8:
            printf("Enter  year ");
            scanf("%d",&a);
            if(a%4==0)
            {
                printf("%d is Leap Year",a);
            }
            else
            {
                printf("%d is Leap Year",a);
            }
            break;
        case 9:
            printf("Enter a Number ");
            scanf("%d",&a);
            if(a>0)
            {
                printf("%d is Positive Number",a);
            }
            break;
        default:
            printf("Wrong Choice");
    }
}
