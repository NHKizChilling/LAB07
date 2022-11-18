#include <stdio.h>
#include <math.h> 

int main()
{
    int n; 
    float s = 0;
    do
    {
        printf("Nhap n: ");
        scanf("%d", &n);
        if ( n < 0 ) 
            printf("yeu cau nhap lai");
    } while ( n < 0 );
    for ( int i = 1; i <= n; i++ ) 
    {
        s += pow( -1, i - 1 )  / pow( 2 * i, 2 );
    }
    printf("S la: %f", s);
    return 0; 
}