#include<stdio.h>
#include<conio.h>
void main()
{
    int month_num;
    printf("Enter Month Number");
    scanf("%d",&month_num);
    switch(month_num)
    {
    case 1:
        printf("January");
        break;
    case 2:
        printf("Feb");
        break;
    case 3:
        printf("Mar");
        break;
    case 4:
        printf("Apr");
        break;
    case 5:
        printf("May>");
        break;
    case 6:
        printf("Jun");
        break;
    case 7:
        printf("july");
        break;
    case 8:
        printf("Aug");
        break;
    case 9:
        printf("Sep");
        break;
    case 10:
        printf("Oct");
        break;
    case 11:
        printf("Nov");
        break;
    case 12:
        printf("Dec");
        break;
    default:
        break;
    }
}