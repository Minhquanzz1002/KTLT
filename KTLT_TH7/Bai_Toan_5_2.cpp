#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
typedef struct{
    char fullname[25];
    float dToan;
    float dTin;
} SV;
void input (char *FileName);

void output (char *FileName);

void Tim (SV arr[]);
void chepVaoMang (SV arr[], int &n);

int main(){
    SV arr[10];
    while(true){
        int key;
        system("cls");
        printf("\n*****************************************\n");
        printf("\n* 1. Nhap thong tin                     *");
        printf("\n* 2. In thong tin                       *");
        printf("\n* 0. Thoat                              *");
        printf("\n*****************************************");
        printf("\n*         Enter number                  *");
        scanf("%d",&key);
        switch(key){
            case 1:
                printf("\nNhap thong tin sinh vien");
                input("D:\\D\\Document\\KTLT_KH2_2021\\File_Code\\TH7_BaiToan5.dat");
                printf("\nPress any to continue!!!");
                getch();
                break;
            case 2:
                printf("\nIn thong tin sinh vien");
                output("D:\\D\\Document\\KTLT_KH2_2021\\File_Code\\TH7_BaiToan5.dat");
                printf("\nPress any to continue!!!");
                getch();
                break;
            case 0:
                printf("\nBan chon ket thuc ");
                getch();
                return 0;
            default:
                printf("\nKhong ton tai chuc nang nay");
                printf("\nPress any to continue!!!");
                getch();
                break;
        }
    }
}
/*Nhap thong tin cho sinh vien*/
void input(char *FileName){
    FILE *fp;
    SV sv;
    fp = fopen(FileName,"wb");
    if (fp == NULL){
        printf("\nCan not open file!!!");
    }
    else{
        int n;
        printf("\nNhap so luong sinh vien: ");
        scanf("%d",&n);
        for (int i = 0; i < n ; i++){
            printf("\n---------------------------------\n");
            printf("\nNhap thong tin sinh vien thu %d",i+1);
            printf("\nNhap ho ten: ");
            fflush(stdin);
            gets(sv.fullname);
            printf("Nhap diem toan: ");
            scanf("%f",&sv.dToan);
            printf("Nhap diem tin: ");
            scanf("%f",&sv.dTin);
            fwrite(&sv,sizeof(sv),1,fp);
        }
        fclose(fp);
    }
}
/*Xuat thong tin sinh vien*/
void output (char *FileName){
    FILE *fp;
    SV sv;
    fp = fopen(FileName,"rb");
    if (fp == NULL){
        printf("\nCan not open file!!!");
    }
    else{
        int i = 0;
        printf("\n%25s|%10s|%10s","Ho va ten","Diem toan","Diem tin");
        fread(&sv,sizeof(sv),1,fp);
        while(!feof(fp)){
            printf("\n%25s|%10.2f|%10.2f",sv.fullname,sv.dToan,sv.dTin);
            fread(&sv,sizeof(sv),1,fp);
        }
        fclose(fp);
    }
}