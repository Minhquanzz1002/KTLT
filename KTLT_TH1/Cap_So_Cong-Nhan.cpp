#include <stdio.h>
double capSoNhan (int a, int q, int n);
double capSoCong (int a, int r, int n);
int main(){
    int a, n,q,r;
    printf("Nhap so hang dau: ");
    scanf("%d",&a);
    printf("Nhap cong boi va cong sai: ");
    scanf("%d%d",&q,&r);
    printf("So hang can tim: ");
    scanf("%d",&n);
    printf("10 so hang dau cua cap so cong:");
    for (int i = 1; i <= 10; i++){
        printf("%5.0f",capSoCong(a,r,i));
    }
    printf("\n10 so hang dau cua cap so nhan:");
    for (int i = 1; i <= 10; i++){
        printf("%.0f\t",capSoNhan(a,q,i));
    }
}
double capSoNhan (int a, int q, int n){
    if (n==1)
        return a;
    return capSoNhan(a,q,n-1)*q;
}
double capSoCong (int a, int r, int n){
    if (n==1)
        return a;
    return capSoCong(a,r,n-1)+r;
}
