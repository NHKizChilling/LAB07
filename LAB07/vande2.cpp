#include <stdio.h>

int main() 
{
    int input;
    int sum = 0;
    do
    {
        printf("Nhap tien: ");
        scanf("%d", &input);
        if ( input >= 0 ) 
            sum += input;
    } while ( input >= 0 );
    printf("Tong tien la: %d", sum);
}