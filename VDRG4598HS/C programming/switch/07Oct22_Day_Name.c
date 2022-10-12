#include<stdio.h>
#include<conio.h>
void main()
{
    int day_num;
    printf("Enter Day Number\n");
    scanf("%d",&day_num);
    switch(day_num)
    {
    case 1:
        printf("Mon");
        break;
    case 2:
        printf("Tue");
        break;
    case 3:
        printf("wed");
        break;
    case 4:
        printf("Thu");
        break;
    case 5:
        printf("Fri");
        break;
    case 6:
        printf("Sat");
        break;
    case 7:
        printf("Sun");
        break;
    
    default:
        printf("Invalid Input");
        break;
    }
}