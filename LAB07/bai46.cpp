#include <stdio.h>

int main()
{
    float a;
    float sum = 0;
    int n = 1;
    do
    {
        printf("Nhap a: ");
        scanf("%f", &a);
        if ( a < 0 ) 
            printf("yeu cau nhap lai");
    } while ( a < 0 );
    
    do
    {
        sum += (float)1/n;
        if ( sum > a ) 
            printf("N la: %d", n);
        n++;
    } while ( sum <= a );
    return 0;
}