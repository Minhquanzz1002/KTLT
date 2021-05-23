#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
long chuyenNhiPhan (int n){
    long b;
    if (n == 0){
        return 0;
    }
    else{
        b = n%2;
    }
    return chuyenNhiPhan(n/2)*10+b;
}
int main(){
    system("cls");
    long n;
    printf("Nhap n: ");
    scanf("%ld",&n);
    printf("Nhi phan: %ld",chuyenNhiPhan(n));
    getch();
}