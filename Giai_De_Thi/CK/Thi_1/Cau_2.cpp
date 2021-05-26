#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <stdlib.h>
typedef struct{
    char ma_thuoc[10];
    char ten_thuoc[10];
    int don_gia;
    struct{
        int day;
        int month;
        int year;
    }HSD;
}THUOC;
void enter_1(THUOC &P);
void enter_2(THUOC arr[],int &n);
void print(THUOC arr[], int n);
void writeBin(THUOC arr[], int n);
void write(THUOC arr[], int n);
void readBin(THUOC arr[], int &n);
void ngayHienTai(int &dd, int &mm, int &yy);
void timThuocHetHan(THUOC arr[], int n);
int main(){
    THUOC arr[10], arr1[10], P;
    int n, m;
    enter_2(arr,n);
    print(arr,n);
    writeBin(arr,n);
    readBin(arr1,m);
    print(arr1,m);
    getch();
    system("cls");
    timThuocHetHan(arr1,m);
}
/*Nhap mot loai thuoc*/
void enter_1 (THUOC &P){
    printf("\nNhap ma thuoc: ");
    fflush(stdin);
    gets(P.ma_thuoc);
    printf("Ten thuoc: ");
    fflush(stdin);
    gets(P.ten_thuoc);
    printf("Don gia: ");
    scanf("%d",&P.don_gia);
    printf("Nhap han su dung (dd mm yy): ");
    scanf("%d%d%d",&P.HSD.day,&P.HSD.month,&P.HSD.year);
}
/*Nhap nhieu loai thuoc*/
void enter_2 (THUOC arr[], int &n){
    printf("\nNhap so luong: ");
    scanf("%d",&n);
    for (int i = 0; i < n ; i++){
        printf("\n-----------------------------------------------------\n");
        printf("\nNhap thong tin cho loai thuoc %d",i + 1);
        enter_1(arr[i]);
    }
}
/*Ham nhap vao file txt*/
void write(THUOC arr[], int n){
    int i;
    FILE *f = fopen("D:\\D\\Document\\KTLT_KH2_2021\\File_Code\\GiaiDeThiCuoiKi.txt", "w");
    if(f==NULL) printf("Error load file");
    fprintf(f,"%10s|%10s|%10s|%10s","Ma","Ten","Gia","HSD");
    for (i = 0; i < n; i++)
        fprintf(f,"%10s %10s %10d %2d %2d %4d",arr[i].ma_thuoc,arr[i].ten_thuoc,arr[i].don_gia,arr[i].HSD.day,arr[i].HSD.month,arr[i].HSD.year);
    fclose(f);
    printf("\ninput and write success to file!n");
}
/*Ham in danh sach thuoc*/
void print(THUOC arr[], int n){
    printf("\n%10s|%10s|%10s|%10s","Ma","Ten","Gia","HSD");
    for (int i = 0; i < n ; i++){
        printf("\n%10s|%10s|%10d|%2d-%2d-%4d",arr[i].ma_thuoc,arr[i].ten_thuoc,arr[i].don_gia,arr[i].HSD.day,arr[i].HSD.month,arr[i].HSD.year);
    }
}
/*Ghi noi dung vao file nhi phan*/
void writeBin(THUOC arr[], int n){
    FILE *f;
    char FileName[100];
    printf("\nNhap duong dan va ten file muon luu: ");
    fflush(stdin);
    gets(FileName);
    f = fopen(FileName,"wb");
    if (f == NULL){
        printf("\nKhong the mo file");
    }
    else{
        fwrite(&n,sizeof(n),1,f);
        for(int i = 0; i < n; i++){
            fwrite(&arr[i],sizeof(THUOC),1,f);
        }
    }
    fclose(f);
    printf("\nGhi vao file thanh cong");
}
/*Doc noi dung tu file nhi phan*/
void readBin(THUOC arr[], int &n){
    FILE *f;
    char FileName[100];
    printf("\nNhap duong dan va ten file can doc: ");
    fflush(stdin);
    gets(FileName);
    f = fopen(FileName,"rb");
    if (f == NULL){
        printf("\nKhong the mo file");
    }
    else{
        fread(&n,sizeof(n),1,f);
        for (int i = 0; i < n; i++){
            fread(&arr[i],sizeof(THUOC),1,f);
        }
    }
    fclose(f);
    printf("\nDoc file thanh cong");
}
/*Ham tim ten thuoc da het han su dung*/
void timThuocHetHan(THUOC arr[], int n){
    printf("\nTat ca cac loai thuoc het han su dung");
    int dd, mm, yy;
    int check, j = 1;
    ngayHienTai(dd,mm,yy);
    printf("\nNgay hien tai: %d-%d-%d",dd,mm,yy);
    printf("\n%5s|%10s|%10s|%10s|%10s","STT","Ma","Ten","Gia","HSD");
    for (int i = 0; i < n; i++){
        check = -1;
        if(arr[i].HSD.year < yy){
            check = 0;
        }
        else if(arr[i].HSD.year == yy){
            if(arr[i].HSD.month < mm){
                check = 0;
            }
            else if(arr[i].HSD.month == mm){
                if(arr[i].HSD.day < dd){
                    check = 0;
                }
            }
        }
        if (check == 0){
            printf("\n%5d|%10s|%10s|%10d|%2d-%2d-%4d",j,arr[i].ma_thuoc,arr[i].ten_thuoc,arr[i].don_gia,arr[i].HSD.day,arr[i].HSD.month,arr[i].HSD.year);
            j++;
        }
    }
}
/*Ham lay ngay thang nam hien tai*/
void ngayHienTai(int &dd, int &mm, int &yy){
    time_t now = time(0);
    tm *ltm = localtime(&now);
    yy = 1900 + ltm->tm_year;
    mm = 1 + ltm->tm_mon;
    dd = ltm->tm_mday;
}
