#include<stdio.h>
void main()
{
    int tyre_num;
    printf("Enter A numbe of tyres\n");
    scanf("%d",&tyre_num);
    if(tyre_num>0 && tyre_num<=1)
    {
        printf("Invalide vehicle\n");
    }
    else if(tyre_num==2)
    {
        printf("Two vehiler\n");
    }
    else if(tyre_num==3)
    {
        printf("auto\n");
    }
    else if(tyre_num==4)
    {
        printf("car or four vehiler\n");
    }
    else if (tyre_num%2!=0)
    {
        printf("Invalide tyres");
    }
    else
    {
        printf("hevy vehicle");
    }
    

    
}