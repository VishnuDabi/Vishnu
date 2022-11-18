#include<stdio.h>       // switch case
void main()
{
    int choice,a,b,result;
    printf("Enter 1 for Addition\n");
    printf("Enter 2 for Substraction\n");
    printf("Enter 3 for multiplication\n");
    printf("Enter 4 for Divide\n");
    printf("Enter 5 for Even odd\n");
    printf("Enter 6 for positive or negative\n");
    printf("Enter 7 for highest\n");
    printf("Enter 8 for lowest\n");
    printf("Enter 9 for leap year\n");
    printf("Enter 10 for voting eligiblity check\n");
    printf("Enter your choice");
    scanf("%d",&choice);
    switch (choice)
    {
        case 1:
            printf("Enetr value of a\n");
            scanf("%d",&a);
            printf("Enetr value of b\n");
            scanf("%d",&b);
            printf("The sum of %d and %d = %d \n",a,b,a+b);
            break;
        case 2:
            printf("Enetr value of a\n");
            scanf("%d",&a);
            printf("Enetr value of b\n");
            scanf("%d",&b);
            printf("The substraction of %d and %d = %d \n",a,b,a-b);
            break;
        case 3:
            printf("Enetr value of a\n");
            scanf("%d",&a);
            printf("Enetr value of b\n");
            scanf("%d",&b);
            printf("The multiplication of %d and %d = %d \n",a,b,a*b);
            break;
        case 4:
            printf("Enetr value of a\n");
            scanf("%d",&a);
            printf("Enetr value of b\n");
            scanf("%d",&b);
            printf("The division of %d and %d = %d \n",a,b,a/b);
            break;
        case 5:
            printf("Enter a number for even odd\n");
            scanf("%d",&a);
            if(a%2==0)
            {
                printf("%d number is even number \n",a);
            }
            else
            {
                printf("%d number is odd number \n",a);
            }
            break;
        case 6:
        printf("Enter a number ");
        scanf("%d",&a);
            if(a>=0)
            {
                printf("%d is Positive Number \n",a);
            }
            else
            {
                printf("%d is Negative Number \n",a);
            }
            break;
        case 7:
            printf("Enter A number for a \n");
            scanf("%d",&a);
            printf("Enter A number for b \n");
            scanf("%d",&b);
            if(a>b)
            {
                printf("%d number is greater then %d",a,b);
            }
            else
            {
                printf("%d number is greater then %d",b,a);
            }
            break;
        case 8:
            printf("Enter A number for a \n");
            scanf("%d",&a);
            printf("Enter A number for b \n");
            scanf("%d",&b);
            if(a<b)
            {
                printf("%d number is lower then %d",a,b);
            }
            else
            {
                printf("%d number is lower then %d",b,a);
            }
            break;
        case 9:
            printf("Enter a Year\n");
            scanf("%d",&a);
            if(a%4==0)
            {
                printf("%d year is leap year\n",a);
            }
            else
            {
                printf("%d year is not a leap year\n",a);
            }
            break;
        case 10:
            printf("Enter your Age\n");
            scanf("%d",&a);
            if(a>=18)
            {
                printf("your Age is %d you are elegible for voting\n",a);
            }
            else
            {
                printf("your Age is %d you are not elegible for voting\n",a);
            }
            break;
        default:
            printf("Invalid choice");
            break;
    }
}