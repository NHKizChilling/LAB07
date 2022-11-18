#include <stdio.h>

int giai_thua(int n);

int main() 
{
    int n, k;
    int comp; 
    do
    {
        printf("Nhap n: ");
        scanf("%d", &n);
        printf("Nhap k: ");
        scanf("%d", &k);
        if ( n < 0 ) 
            printf("yeu cau nhap lai");
    } while ( n < 0 && k < 0 && k <= n );
    comp = giai_thua(n) / ( giai_thua(k) * giai_thua( n - k) );
    printf("To hop la: %d", comp);
    return 0;
}  

int giai_thua(int n) 
{
    if ( n == 1 )
        return 1;
    return n * giai_thua( n - 1);
}