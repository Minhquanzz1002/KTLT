#include <stdio.h>
int capSoCong (int a, int n, int r)     /*a so hang dau tien*/
{                                       /*r la cong sai*/
    if (n==1)
        return a;
    return capSoCong(a,n-1,r)+r;
}
int main()
{
    int a, n, r;
    printf("Nhap so hang dau tien, n , cong sai: ");
    scanf("%d%d%d",&a,&n,&r);
    printf("So hang thu %d la %d",n,capSoCong(a,n,r));
}