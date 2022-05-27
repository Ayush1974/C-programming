#include<stdio.h>

int main()
{
    char ch;

    printf("\n Enter a character : ");
    scanf("%c", &ch);

    if (ch == 'a'||ch == 'A'||ch == 'e'||ch == 'E'||ch == 'i'||ch == 'I'||ch == 'o'||ch == 'O'||ch == 'u'||ch == 'U')
    {
        printf("\n You have entered a vowel.");
    }
    else
    {
        printf("\n You have entered a consonant.");
    }

    return 0;
}