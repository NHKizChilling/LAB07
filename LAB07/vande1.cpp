#include <stdio.h>

int main() 
{
    int n;
    do
    {
        printf("Nhap n ( 0<n<100 ):");
        scanf("%d",&n);
    } while ( n < 0 || n > 100 );
    return 0;
}