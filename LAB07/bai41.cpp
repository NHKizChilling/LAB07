#include <stdio.h>

int main()
{
    int n;
    float s = 1;
    do
    {
        printf("Nhap n: ");
        scanf("%d", &n);
        if ( n < 0 ) 
            printf("yeu cau nhap lai");
    } while ( n < 0 );
    for ( int i = 1; i <= n; i++) 
    {
        s *= (float)( 2 * i - 1 ) / ( 2 * i);
    }
    printf("S la: %f", s);
    return 0;
}