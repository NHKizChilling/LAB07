#include <stdio.h>

int main()
{
    int n;
    float sum = 0;
    printf("Nhap n: ");
    scanf("%d", &n);
    for ( float i = 1; i <= n; i++ ) 
    {
        sum += 1.0 / i;
    }
    printf("Ket qua la: %f", sum);
    return 0;
}