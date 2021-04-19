#include <stdio.h>
int nhiPhan (int n);
int main(){
    int n;
    printf("Nhap n: ");
    scanf("%d",&n);
    printf("Output: %d",nhiPhan(n));
}
int nhiPhan (int n){
    long b;
    if (n==0)
        return 0;
    else
        b = n%2;
    return nhiPhan(n/2)*10 + b;
}