#include <stdio.h>
#include <math.h>

int main() 
{
    int n;
    long sum = 0;
    do
    {
        printf("Nhap n: ");
        scanf("%d", &n);
        if ( n < 0 )
            printf("Yeu cau nhap lai\n");
    } while ( n < 0 );
    for ( int i = 0; i < n; i++ )
    {
        sum += pow(2 * i + 1, 2);
    }    
    printf("S la: %ld", sum);
    return 0;
}