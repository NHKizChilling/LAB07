#include <stdio.h>

int fibonaci(int n);

int main() 
{
    int n;
    int sum = 0; 
    do
    {
        printf("Nhap n: ");
        scanf("%d", &n);
        if ( n < 0 ) 
            printf("yeu cau nhap lai");
    } while ( n < 0 );
    for ( int i = 1; i <= n; i++ ) 
        sum += fibonaci(i);
    printf("S la: %d", sum);
    return 0;
}

int fibonaci(int n) 
{
    if ( n == 1 || n == 2 )
        return 1;
    return fibonaci( n - 1 ) + fibonaci( n - 2 );
}