#include <stdio.h>
#include <ctype.h>

int main()
{
    char ch;
    int nVowels = 0;
    int nConsonants = 0;
    int nOthers = 0;
    printf("Nhap chu: ");
    
    do
    {
        scanf("%c", &ch);
        ch = toupper(ch);
        if ( ch >= 'A' && ch <= 'Z' ) 
        {
            switch (ch)
            {
            case 'A' : case 'E' : case 'I' : case 'O' : case 'U' :
                nVowels ++;
                break;
            default:
                nConsonants++;
                break;
            }
        } else if ( ch != 10 ) 
            nOthers++;
    } while ( ch != '\n' );
    printf("Vowels: %d", nVowels);
    printf("\nConsonants: %d", nConsonants);
    printf("\nOthers: %d", nOthers);
}