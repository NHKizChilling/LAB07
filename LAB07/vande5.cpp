#include <stdio.h>

void money( float x, int y, int M );

int main() 
{
    float x; // * interest
    int y; // * saving_money
    int M; // * expected_money
    printf("Nhap tien gui: ");
    scanf("%d", &y);
    printf("Lai xuat: ");
    scanf("%f", &x);
    printf("So tien muon nhan duoc: ");
    scanf("%d", &M);
    money(x,y,M);
}

void money( float x, int y, int M ) 
{
    short n = 0; // * months
    x = x / 100;
    for ( y ; y <= M-1; y = y + ( y * x) ) {
        ++n;
    }
    printf("So thang can la: %d", n);
    
}