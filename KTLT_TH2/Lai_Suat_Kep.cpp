#include <stdio.h>
float laiSuatKep (int a, int n, int x);
int main(){
    int a, n;
    float x;
    printf("Nhap vao lai suat: ");
    scanf("%f",&x);
    printf("Nhap so tien ban dau:");
    scanf("%d",&a);
    printf("Nhap so nam: ");
    scanf("%d",&n);
    printf("Tong tien sau %d nam la %.4f", n, laiSuatKep(a,n,x));
}
/*Tinh tong so tien sau n nam*/
float laiSuatKep (int a, int n, int x){
    if (n==0)
        return a;
    return laiSuatKep(a,n-1,x)*(1+x/100.0);
}