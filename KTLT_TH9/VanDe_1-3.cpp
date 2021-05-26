#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void nhap (int &a, int &b);
void squared (int &a, int &b);
void cubed (int &a, int &b);
void hoanVi (int &a, int &b);
void hienThi(int a, int b);
int main(){
    int a = 2, b = 4;
    bool thoat = false;
    while(thoat == false){
        int key;
        system("cls");
        printf("\n1.Nhap\n2.Binh phuong\n3.Lap phuong\n4.Hoan vi\n0.Thoat\n");
        fflush(stdin);
        scanf("%d",&key);
        switch (key)
        {
            case 1:
                nhap(a,b);
                // hienThi(a,b);
                break;
            case 2:
                squared(a,b);
                // hienThi(a,b);
                break;
            case 3:
                cubed(a,b);
                // hienThi(a,b);
                break;
            case 4:
                hoanVi(a,b);
                // hienThi(a,b);
                break;
            case 0:
                thoat = true;
                return 0;
            default:
                break;
        }
        if(thoat == false){
            hienThi(a,b);
            getch();
        }
    }
}
/*Nhap gia tri moi*/
void nhap (int &a, int &b){
    printf("\nNhap gia tri moi cho a: ");
    scanf("%d",&a);
    printf("Nhap gia tri moi cho b: ");
    scanf("%d",&b);
}
/*Binh phuong*/
void squared (int &a, int &b){
    a *= a;
    b *= b; 
}
/*Lap phuong*/
void cubed (int &a, int &b){
    a = a*a*a;
    b = b*b*b;
}
void hoanVi (int &a, int &b){
    int temp;
    temp = a;
    a = b;
    b = temp;
}
void hienThi(int a, int b){
    printf("\na = %d\nb = %d",a,b);
}
/*XONG*/
