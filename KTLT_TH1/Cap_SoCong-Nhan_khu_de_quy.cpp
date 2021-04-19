#include <stdio.h>
double capSoCong (int a, int r, int n);
double capSoNhan (int a, int q, int n);
int main(){
    int a, n, q, r;
    printf("Nhap so hang dau: ");
    scanf("%d",&a);
    printf("Nhap cong boi va cong sai: ");
    scanf("%d%d",&q,&r);
    printf("So hang can tim: ");
    scanf("%d",&n);
    printf("Phan tu thu %d cua cap so cong la %.0f",n,capSoCong(a,r,n));
    printf("\nPhan tu thu %d cua cap so nhan la %.0f",n,capSoNhan(a,q,n));
}
double capSoCong (int a, int r, int n){
    int GiaTri = a;
    for (int i = 2; i <= n; i++){
        GiaTri += r;
    }
    return GiaTri;
}
double capSoNhan (int a, int q, int n){
    int GiaTri = a;
    for (int i = 2; i <= n; i++){
        GiaTri *= q;
    }
    return GiaTri;
}