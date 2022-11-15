#include <stdio.h>
void main()
{
    int size, i, num, c = 0, count = 0;
    printf("Enetr size of Array");
    scanf("%d", &size);
    int ar[size];
    printf("Enter a number");
    scanf("%d", &num);
    printf("Enetr values of Array");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &ar[i]);
    }
    for (i = 0; i < size; i++)
    {
        count++;
        if (ar[i] == num)
        {
            printf("%d present in array\n", num);
            c++;
            break;
        }
    }
    if (c == 0)
    {
        printf("%d is not present in array", num);
    }
    printf("Position of %d is = %d ", num, count - 1);
}