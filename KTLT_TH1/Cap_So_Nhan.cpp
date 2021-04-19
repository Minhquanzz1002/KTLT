#include <stdio.h>
int capSoNhan (int a, int q, int n);
int main(){
    int a, q, n;
    printf("Nhap so hang dau: ");
    scanf("%d",&a);
    printf("\nNhap cong boi: ");
    scanf("%d",&q);
    printf("\nPhan tu can tim: ");
    scanf("%d",&n);
    printf("Phan tu thu %d la %d",n,capSoNhan(a,q,n));
}
int capSoNhan (int a, int q, int n){
    if (n==1)
        return a;
    return capSoNhan(a,q,n-1)*q;
}