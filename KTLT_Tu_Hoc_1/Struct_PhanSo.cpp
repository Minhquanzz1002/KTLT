#include <stdio.h>
#include <algorithm>
#include <stdlib.h>
#include <math.h>
struct PHANSO{
    int tu;
    int mau;
};
void input (PHANSO &ps);
void output (PHANSO ps);
int gcd (int a, int b);
int uocchungmax (int a, int b);
void toigianps (PHANSO &ps);
void tong (PHANSO ps1,PHANSO ps2, PHANSO ps3);
void hieu (PHANSO ps1,PHANSO ps2, PHANSO ps3);
void tich (PHANSO ps1,PHANSO ps2, PHANSO ps3);
void thuong (PHANSO ps1,PHANSO ps2, PHANSO ps3);
void kiemtratoigian (PHANSO ps);
void quyDong (PHANSO &ps1, PHANSO &ps2);        /*Code con thieu sot*/
void kiemtra(PHANSO ps);    
void sosanh(PHANSO ps1, PHANSO ps2);        /*Chua toi uu*/
int main(){
    PHANSO ps, ps1 , ps2, ps3;
    /*
    input(ps);
    printf("Phan so sau khi nhap: ");
    output(ps);
    toigianps(ps);
    printf("\nPhan so toi gian: ");
    output(ps);
    */
    input(ps1);
    input(ps2);
    /*
    tong(ps1,ps2,ps3);
    hieu(ps1,ps2,ps3);
    tich(ps1,ps2,ps3);
    thuong(ps1,ps2,ps3);
    */
   /*
    quyDong(ps1,ps2);
    printf("\nPhan so 1: ");
    output(ps1);
    printf("\nPhan so 2: ");
    output(ps2);
    */
    //kiemtratoigian(ps1);
    //sosanh(ps1,ps2);
    kiemtra(ps1);
}
/*Nhap phan so*/
void input (PHANSO &ps){
    printf("Nhap tu: ");
    scanf("%d",&ps.tu);
    printf("Nhap mau: ");
    scanf("%d",&ps.mau);
}
void output (PHANSO ps){
    printf("%d/%d",ps.tu,ps.mau);
}
/*Tim uoc chung lon nhat cah 1*/
int gcd (int a, int b){
    while(a != b)
        if (a > b)
            a = a - b;
        else
            b = b - a;
    return a;
}
/*Tim uoc chung lon nhat cach 2*/
int uocchungmax (int a, int b){
    return std::__gcd(a,b);
}
/*Toi gian phan so*/
void toigianps (PHANSO &ps){
    PHANSO tam;
    tam.tu=abs(ps.tu);
	tam.mau=abs(ps.mau);
    int uocchung = gcd(tam.tu, tam.mau);
    ps.tu /= uocchung;
    ps.mau /= uocchung;
}
/*Tinh tong 2 phan so*/
void tong (PHANSO ps1,PHANSO ps2, PHANSO ps3){
    ps3.tu = ps1.tu*ps2.mau + ps2.tu*ps1.mau;
    ps3.mau = ps1.mau*ps2.mau;
    toigianps(ps3);
    printf("\n%d/%d + %d/%d = ",ps1.tu,ps1.mau,ps2.tu,ps2.mau);
    output(ps3);
}
/*Tinh thuong 2 phan so*/
void thuong (PHANSO ps1, PHANSO ps2, PHANSO ps3){
    ps3.tu = ps1.tu*ps2.mau;
    ps3.mau = ps1.mau*ps2.tu;
    toigianps(ps3);
    printf("\n%d/%d / %d/%d = ",ps1.tu,ps1.mau,ps2.tu,ps2.mau);
    output(ps3);
}
/*Tinh tich 2 phan so*/
void tich (PHANSO ps1, PHANSO ps2, PHANSO ps3 ){
    ps3.tu =  ps1.tu*ps2.tu;
    ps3.mau = ps1.mau*ps2.mau;
    toigianps(ps3);
    printf("\n%d/%d * %d/%d = ",ps1.tu,ps1.mau,ps2.tu,ps2.mau);
    output(ps3);
}
/*Tinh hieu 2 phan so*/
void hieu (PHANSO ps1, PHANSO ps2, PHANSO ps3){
    ps3.tu = ps1.tu*ps2.mau - ps2.tu*ps1.mau;
    ps3.mau = ps1.mau*ps2.mau;
    toigianps(ps3);
    printf("\n%d/%d - %d/%d = ",ps1.tu,ps1.mau,ps2.tu,ps2.mau);
    output(ps3);
}
/*Kiem tra phan so toi gian*/
void kiemtratoigian (PHANSO ps){
    int ucln = gcd(ps.tu,ps.mau);
    if (ucln == 1)
        printf("\nPhan so da toi gian");
    else
        printf("Phan so chua toi gian");
}
/*Quy dong 2 phan so*/
void quyDong (PHANSO &ps1, PHANSO &ps2){
    toigianps(ps1);
    toigianps(ps2);
    ps1.tu = ps1.tu*ps2.mau;
    ps2.tu = ps1.mau*ps2.tu;
    ps2.mau = ps1.mau = ps1.mau*ps2.mau;
}
/*Kiem tra phan so am hay duong*/
void kiemtra(PHANSO ps){
    if (ps.tu < 0){
        if (ps.mau < 0)
            printf("\nPhan so duong");
        else
            printf("\nphan so am");
    }
    else if (ps.tu > 0){
        if (ps.mau > 0)
            printf("Phan so duong");
        else
            printf("Phan so am");
    }
}
/*So sanh 2 phan so*/
void sosanh(PHANSO ps1, PHANSO ps2){
    quyDong(ps1,ps2);
    if (ps1.tu > ps2.tu)
        printf("Phan so %d/%d lon hon phan so %d/%d",ps1.tu,ps1.mau,ps2.tu,ps2.mau);
    else
        printf("Phan so %d/%d lon hon phan so %d/%d",ps2.tu,ps2.mau,ps1.tu,ps1.mau);
}