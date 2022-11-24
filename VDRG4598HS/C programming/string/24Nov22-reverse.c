#include <stdio.h>
#include <string.h>
 
int main()
{
    char str[50] = "PrOgRaMminG";
    printf("The given string is =%s\n", str);
    printf("The given string is =%s\n", strlwr(str));
    printf("The given string is =%s\n", strupr(str));
    printf("After reversing string is =%s", strrev(str));
}