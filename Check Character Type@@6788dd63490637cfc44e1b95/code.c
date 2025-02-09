#include <stdio.h>

int main()
{
    char ch;
    scanf("%c", &ch);
    if (ch >= '0' && ch <= '9')
    {
        printf("Digit\n");
    }
    else if (ch == 'a' || ch == 'e'|| ch == 'i'|| ch =='O'|| ch == 'u')
    {
        printf("Vowel\n");
    }
    else if ((ch >= 'a') && ch<= 'z'|| (ch >= 'A' && ch<= 'Z'))
    {
        printf("Consonant\n");
    }
    else
    {
        printf("Special Character\n");
    }
    return 0;
    
}