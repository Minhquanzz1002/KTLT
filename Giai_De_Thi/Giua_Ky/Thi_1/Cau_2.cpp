/*Quan li nhim*/
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
typedef struct{
    char HedID[8];
    char HedSpe[15];
    long Price;
    int Quantity;
}Hedgehog;
void input (Hedgehog HedArr[], int &n);
void output (Hedgehog HedArr[], int n);
void output_min (Hedgehog HedArr[], int n);
long tim_Gia_Thap_Nhat (Hedgehog HedArr[], int n);
int main(){
    Hedgehog HedArr[10];
    int n, key;
    while(true){
        system("cls");
        printf("\n******************************************");
        printf("\n*  1. Nhap danh sach nhim                *");
        printf("\n*  2. In danh sach nhim                  *");
        printf("\n*  3. In danh sach nhim gia thap nhat    *");
        printf("\n*  0. Thoat                              *");
        printf("\n******************************************");
        printf("\n*  Nhap lua chon                         *");
        scanf("%d",&key);
        switch (key){
        case 1:
            input(HedArr,n);
            printf("\nNhap bat ki de tiep tuc");
            getch();
            break;
        case 2:
            output(HedArr,n);
            printf("\nNhap bat ki de tiep tuc");
            getch();
            break;
        case 3:
            output_min(HedArr,n);
            printf("\nNhap bat ki de tiep tuc");
            getch();
            break;
        case 0:
            printf("\nBan chon thoat");
            getch();
            return 0;
        default:
            printf("\nNhap sai");
            printf("\nNhap bat ki de tiep tuc");
            break;
        }
    }
}
/*Nhap thong tin nhim*/
void input (Hedgehog HedArr[], int &n){
    printf("Nhap so loai nhim: ");
    scanf("%d",&n);
    for (int i = 0; i < n; i++){
        printf("Nhap thong tin cho loai nhom thu %d",i+1);
        printf("\nNhap ma Nhim: ");
        fflush(stdin);
        gets(HedArr[i].HedID);
        printf("Nhap ten nhim: ");
        fflush(stdin);
        gets(HedArr[i].HedSpe);
        printf("Nhap don gia: ");
        scanf("%ld",&HedArr[i].Price);
        printf("Nhap so luong: ");
        scanf("%d",&HedArr[i].Quantity);
    }
}
/*In danh sach nhim*/
void output (Hedgehog HedArr[], int n){
    printf("\n-------------DS NHIM--------------\n");
    printf("\n%3s %8s %15s %15s %15s","STT","Ma nhim","Ten loai nhim","Don gia(ngan)","So luong");
    for (int i = 0; i < n; i++){
        printf("\n%3d %8s %15s %15ld %15d",i+1,HedArr[i].HedID,HedArr[i].HedSpe,HedArr[i].Price,HedArr[i].Quantity);
    }
}
/*Tim gia thap nhat*/
long tim_Gia_Thap_Nhat (Hedgehog HedArr[], int n){
    long giaThapNhat = HedArr[0].Price;
    for (int i = 1; i < n;i++){
        if (HedArr[i].Price < giaThapNhat)
            giaThapNhat = HedArr[i].Price;
    }
    return giaThapNhat;
}
/*In ra man hinh nhim co gia thap nhat*/
void output_min (Hedgehog HedArr[], int n){
    printf("\n----------DS NHIM GIA RE NHAT------------\n");
    long giaThap = tim_Gia_Thap_Nhat(HedArr,n);
    printf("\n%3s %8s %15s %15s %15s","STT","Ma nhim","Ten loai nhim","Don gia(ngan)","So luong");
    for (int i = 0; i < n; i++){
        if (HedArr[i].Price == giaThap)
            printf("\n%3d %8s %15s %15ld %15d",i+1,HedArr[i].HedID,HedArr[i].HedSpe,HedArr[i].Price,HedArr[i].Quantity);
    }
}