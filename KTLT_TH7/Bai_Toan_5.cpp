#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
typedef struct{
    char fullname[25];
    float math;
    float informatics;
}SV;
void enterInfo (SV *sv, int n);

void printInfo (SV *sv, int n);

void enterInfoBoSung (SV *sv, int n, int x);
int main(){
    SV *sv;
    while(true){
        system("cls");
        int key;
        printf("\n*****************************************\n");
        printf("\n*  1. Nhap thong tin                    *");
        printf("\n*  2. Hien thi thong tin                *");
        printf("\n*  3. Nhap them sinh vien               *");
        printf("\n*  0. Thoat                             *");
        printf("\n*****************************************");
        printf("\nNhap lua chon: ");
        scanf("%d",&key);
        switch(key){
            case 1:
                printf("\nBan chon nhap thong tin");
                int n;
                printf("\nNhap so luong can nhap: ");
                scanf("%d",&n);
                sv = (SV*)malloc(n*sizeof(SV));
                enterInfo(sv,n);
                printf("\nPress any to continue!!!");
                getch();
                break;
            case 2:
                printf("\nBan chon in thong tin");
                printInfo(sv,n);
                printf("\nPress any to continue!!!");
                getch();
                break;
            case 3:
                printf("\nBan chon nhap them sinh vien");
                int x;
                printf("\nSo sinh vien can bo sung: ");
                scanf("%d",&x);
                n = n + x;
                realloc(sv,n);
                enterInfoBoSung(sv,n,x);
                printf("\nPress any to continue!!!");
                getch();
                break;
            case 0:
                printf("\nBan chon thoat");
                getch();
                return 0;
            default:
                printf("\nKhong co lua chon nay");
                printf("\nPress any to continue!!!");
                getch();
                break;
        }
    }
}
void enterInfo (SV *sv, int n){
    for (size_t i = 0 ; i < n ; i ++){
        printf("\n------------------------------------\n");
        printf("\nNhap thong tin cho sinh vien thu %d",i+1);
        printf("\nNhap ten: ");
        fflush(stdin);
        gets(sv->fullname);
        printf("Nhap diem toan: ");
        scanf("%f",&sv->math);
        printf("Nhap diem tin: ");
        scanf("%f",&sv->informatics);
    }
}
void printInfo (SV *sv, int n){
    printf("\n%25s|%10s|%10s","Ho va ten","Diem toan","Diem tin");
    for (size_t i = 0 ; i < n; i++){
        printf("\n%25s|%10.2f|%10.2f",(sv + i)->fullname,(sv+i)->math,(sv+i)->informatics);
    }
}
void enterInfoBoSung (SV *sv, int n, int x){
    for (size_t i = n ; i < x ; i ++){
        printf("\n------------------------------------\n");
        printf("\nNhap thong tin cho sinh vien thu %d",i+1);
        printf("\nNhap ten: ");
        fflush(stdin);
        gets(sv->fullname);
        printf("Nhap diem toan: ");
        scanf("%f",&sv->math);
        printf("Nhap diem tin: ");
        scanf("%f",&sv->informatics);
    }
}