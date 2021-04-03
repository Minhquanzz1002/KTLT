/*Toi gian phan so a/b*/
#include <stdio.h>
#include <algorithm>
struct PhanSo
{
    int tu;
    int mau;
};
/*Tim uoc chung lon nhat cua tu va mau*/
int UCLN (int tu, int mau)
{
    return std::__gcd(tu,mau);      /*__gcd thuoc thu vien algorithm cua c++*/
}
/*Rut gon phan so*/
void rutgon (PhanSo &ps)
{
    int s = UCLN(ps.tu,ps.mau);
    printf("Phan so toi gian cua \"%d/%d\" la: \"%d/%d\"",ps.tu,ps.mau,(ps.tu)/s,(ps.mau)/s);
}
/*Nhap gia tri cho tu va mau*/
void nhapPS (PhanSo &ps)
{
    printf("Nhap vao tu so: ");
    scanf("%d",&ps.tu);
    do
    {
        printf("Nhap vao mau so khac 0: ");
        scanf("%d",&ps.mau);
        if (ps.mau == 0 ){
            printf("Mau phai khac khong. Vui long kiem tra lai!!!");
        }
    } while (ps.mau == 0);   
}
int main()
{
    PhanSo ps;
    nhapPS(ps);
    rutgon(ps);
}