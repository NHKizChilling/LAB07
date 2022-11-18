#include <stdio.h>

int main() 
{
    int n;
    int s4 = 0;
    
    printf("Nhap n: ");
    scanf("%d", &n);
    for ( int i = 1; i <= n; i++ ) 
    {
        s4 += i * ( i + 1 ) * ( i + 2 );
    }
   
    printf("S4 la: %d", s4);
    return 0;
}