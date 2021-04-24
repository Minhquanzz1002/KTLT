/*Tim so hang thu n cua day*/
/*a1 = 1*/  /*a2 = 2*/
/*an = 3*a(n-1) + a(n-2)*/
#include <stdio.h>
int A (int n);
int main(){
    int n;
    printf("Nhap N: ");
    scanf("%d",&n);
    printf("So hang thu %d la %d",n,A(n));
}
/*Tim so hang thu n*/
int A (int n){
    if (n==1)
        return 1;
    if (n==2)
        return 2;
    return 3*A(n-1) + A(n-2);
}