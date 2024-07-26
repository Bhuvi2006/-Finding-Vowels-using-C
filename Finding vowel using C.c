#include <stdio.h>
int main()
{
    char a;
    printf("Enter the letter: ");
    scanf("%c",&a);
    switch(a)
    {
    case 'a':
    case 'i':
    case 'e':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        printf("It is a vowel");
        break;
    default:
        printf("It is not a vowel");
        break;
    }
}
