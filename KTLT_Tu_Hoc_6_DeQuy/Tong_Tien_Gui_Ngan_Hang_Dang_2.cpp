/*Tinh tong tien gui ngan hang sau n thang voi lai suat 0.75%*/
/*Neu so tien trong ngan hang it hon 5tr thi mat 5k5 phi*/
#include <stdio.h>
long Tong_tien (long n, int month);
int main(){
    long n;
    int month;
    printf("Nhap so tien ban dau: ");
    scanf("%ld",&n);
    printf("Nhap so thang: ");
    scanf("%d",&month);
    printf("Tong tien sau %d thang: %.4ld",month,Tong_tien(n,month));
}
long Tong_tien (long n, int month){
    if (month == 0)
        return n;
    if (n < 5000000){
        n -= 5500;
    }
    return Tong_tien(n, month - 1)*1.0075;
}