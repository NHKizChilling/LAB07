#include <stdio.h>

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
    if ( n == 1 || n == 0 )
        printf("S la: %d", n);
    if ( n % 2 == 0 ) {
        for ( int i = 1; i <= n; i++ ) {
            if ( i % 2 != 0 ) {
                sum += i;
            }
        }
    } else {
        for ( int i = 1; i <n; i++ ) {
            if ( i % 2 != 0 ) {
                sum += i;
            }
        }
    }
    printf("S la: %d", sum);
    return 0;
}