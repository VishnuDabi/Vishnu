#include<stdio.h>
void main()
{
    char s[10];
    int i,len=0;
    printf("Enter a string\n");
    gets(s);
    puts(s);
    for (int i = 0; s[i]!='\0'; i++)
    {
        len++;
    }
    printf("String length = %d",len);
    
}