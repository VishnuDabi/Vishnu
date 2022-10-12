#include<stdio.h>
#include<conio.h>
void main()
{
    char E_aplhabet;
    printf("Enter a Alphbet\n");
    scanf("%c",&E_aplhabet);
    switch(E_aplhabet)
    {
    case 'a':
        // printf("Vowel");
        // break;
    case 'e':
        // printf("Vowel");
        // break;
    case 'i':
        // printf("Vowel");
        // break;
    case 'o':
        // printf("Vowel");
        // break;
    case 'u':
        printf("Vowel");
        break;
    default:
        printf("Consonent");
        break;
    }
}