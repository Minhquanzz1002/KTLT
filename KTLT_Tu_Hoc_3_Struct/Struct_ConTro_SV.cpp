#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
typedef struct{
    char name[25];
    float dT;   //diem toan
    float dL;   //diem li
    float dH;   //diem hoa
} SV;
void enterInfo (SV *ptr, int n);

void printInfo (SV *ptr, int n);
int main(){
    SV arr[10];
    SV *ptr = &arr[0];
    while(true){
        int key;
        system("cls");
        printf("\n**************************************");
        printf("\n*  1.Nhap thong tin                  *");
        printf("\n*  2.Hien thi thong tin              *");
        printf("\n*  0.Thoat                           *");
        printf("\n**************************************");
        printf("\nNhap lua chon: ");
        scanf("%d",&key);
        switch (key){
            case 1:
                printf("\nBan chon nhap thong tin");
                int n;
                printf("\nNhap so sinh vien: ");
                scanf("%d",&n);
                // SV arr[10];
                // SV *ptr = &arr;
                enterInfo(arr,n);
                printf("\nPress any to continue!!!");
                getch();
                break;
            case 2:
                printf("\nBan chon hien thi thong tin");
                printInfo(ptr,n);
                printf("\nPress any to continue!!!");
                getch();
                break;
            case 0:
                printf("\nBan chon ket thuc");
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
void enterInfo (SV *ptr, int n){
    for (size_t i = 0 ; i < n; i++){
        printf("\n---------------------------------------\n");
        printf("\nNhap thong tin cho SV %d",i +1);
        printf("\nEnter name: ");
        fflush(stdin);
        gets(ptr->name);
        printf("Enter mark math: ");
        scanf("%f",&ptr->dT);
        printf("Enter mark physics: ");
        scanf("%f",&ptr->dT);
        printf("Enter mark chemistry: ");
        scanf("%f",&ptr->dH);
    }
}
void printInfo (SV *ptr, int n){
    printf("\n%25s|%10s|%10s|%10s","Ho va ten","Diem toan","Diem li","Diem hoa");
    for (size_t i = 0; i < n ; i++){
        printf("\n%25s|%10.2f|%10.2f|%10.2f",ptr->name,ptr->dT,ptr->dL,ptr->dH);
        ptr++;
    }
}