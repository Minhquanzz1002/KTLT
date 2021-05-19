#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct{
    char ma_nv[12];     //ma nhan vien
    char ten_nv[60];    //ten nhan vien
    char don_vi[20];    //don vi cua nhan vien
    float luong;    //luong nhan vien
}NHANVIEN;
void enter_1 (NHANVIEN &nv);

void enter_2 (NHANVIEN arr[], int n);

int timNV (NHANVIEN arr[], int n);

void xoaNV (NHANVIEN arr[], int &n);

void print (NHANVIEN arr[], int n);

void chenNV (NHANVIEN arr[], int &n);

float luong_tb (NHANVIEN arr[], int n);

void printMotNhanVien (NHANVIEN nv);

void print_TheoDieuKien (NHANVIEN arr[], int n);

void printNVCungDonVi (NHANVIEN arr[], int n, int vt);
int main(){
    NHANVIEN nv, arr[10];
    //enter_1(nv);
    int n;
    printf("\nNhap so luong nhan vien: ");
    scanf("%d",&n);
    enter_2(arr,n);
    print(arr,n);
    int vt;
    vt = timNV(arr,n);
    printf("Vi tri nhan vien can tim la \"%d\"",vt);
    xoaNV(arr,n);
    print(arr,n);
    chenNV(arr,n);
    print(arr,n);
    print_TheoDieuKien(arr,n);
    printNVCungDonVi(arr,n,vt);
}
/*Ham nhap thong tin mot nhan vien*/
void enter_1 (NHANVIEN &nv){
    printf("\nNhap ma nhan vien: ");
    fflush(stdin);  //Xoa ki tu tren bang nhap
    gets(nv.ma_nv);
    printf("Nhap ten nhan vien: ");
    fflush(stdin);
    gets(nv.ten_nv);
    printf("Nhap don vi cong tac: ");
    fflush(stdin);
    gets(nv.don_vi);
    printf("Nhap luong: ");
    scanf("%f",&nv.luong);
}
/*Nhap thong tin n nhan vien */
void enter_2 (NHANVIEN arr[], int n){
    for (size_t i = 0; i < n; i++){
        printf("\n-----------------------------------------\n");
        printf("Nhap thong tin cho nhan vien %d",i+1);
        enter_1(arr[i]);    
    }
}
/*Ham tim nhan vien theo ma nhan vien nhap tu ban phim*/
int timNV(NHANVIEN arr[], int n){
    char ma_cantim[12];     //Ma nhan vien can tim
    printf("\nNhap ma nhan vien can tim: ");
    fflush(stdin);
    gets(ma_cantim);
    int vt_timthay = -1;    //Gan vi tri bang -1. Cuoi ham vi tri van la -1 => khong tim thay
    for (size_t i = 0; i < n; i++){
        if (strcmp(ma_cantim,arr[i].ma_nv) == 0){   //Ham strcmp tra ve gia tri 0 neu 2 chuoi giong nhau
            vt_timthay = i;     //Neu tim thay gan vt_timthay bang vi tri cua nhan vien do 
            break;      //Da tim thay thi ket thuc for
        }
    }
    return vt_timthay;  //Tra ve vi tri cua nhan vien do
}
/*Ham xoa nhan vien theo ma nhan vien nhap vao*/
void xoaNV (NHANVIEN arr[], int &n){    //So luong nhan vien co thay doi phai dung &n
    char ma_nvcanxoa[12];   //Ma nhan vien can xoa
    printf("\nNhap ma nhan vien can xoa: ");
    fflush(stdin);
    gets(ma_nvcanxoa);
    int xac_nhan = 0;   //Gan bang 0. Neu cuoi chuong trinh van bang 0 => khong tim thay ma nv da nhap
    for (size_t i = 0; i < n ; i++){
        if (strcmp(ma_nvcanxoa,arr[i].ma_nv) == 0){
            xac_nhan = 1;   //Gan bang 1 de biet da xoa nhan vien
            for (size_t j = i; j < n; j++){
                arr[j] = arr[j + 1];
            }
            n -= 1;     //Xoa 1 nhan vien nen giam n xuong 1
        }
    }
    if (xac_nhan == 1){
        printf("\nDa xoa!!!");
    }
    else{
        printf("\nCo dau ma xoa!!!");
    }
}
/*Ham hien thi danh sach nhan vien*/
void print (NHANVIEN arr[], int n){
    printf("\n%12s|%25s|%20s|%10s","Ma NV","Ten NV","Don vi","Luong");
    for (size_t i = 0; i < n ; i++){
        printf("\n%12s|%25s|%20s|%10.2f",arr[i].ma_nv,arr[i].ten_nv,arr[i].don_vi,arr[i].luong);
    }
}
/*Ham chen nhan vien vao vi tri nhap tu ban phim*/
void chenNV (NHANVIEN arr[], int &n){   //So luong co thay doi phai dung &n
    int vt_chen;    //Vi tri muon chen
    do{
        printf("\nNhap vi tri muon chen: ");
        scanf("%d",&vt_chen);
    }
    while(vt_chen < 0 || vt_chen > n);
    NHANVIEN nv;
    printf("\n------------------------------------\n");
    enter_1(nv);
    for (int i = n ; i >= vt_chen ; i--){
        if (i == vt_chen){
            arr[i] = nv;
        }
        else{
            arr[i] = arr[i - 1];
        }
    }
    n += 1;     //Chen => tang so n len
    printf("\nDa chen xong!!!!");
}
/*Ham tinh luong trung binh cua toan cty*/
float luong_tb (NHANVIEN arr[], int n){
    float tong_luong = 0;
    for (size_t i = 0 ; i < n ; i++){
        tong_luong += arr[i].luong;
    }
    float luongtb;
    luongtb = tong_luong/n;
    printf("\nluong tb: %.2f",luongtb);     //In ra luong trung binh de de kiem tra
    return luongtb;     
}
/*In thong tin mot nhan vien*/
void printMotNhanVien (NHANVIEN nv){
    printf("\n%12s|%25s|%20s|%10.2f",nv.ma_nv,nv.ten_nv,nv.don_vi,nv.luong);
}
/*In thong tin nhan vien theo luong trung binh*/
void print_TheoDieuKien (NHANVIEN arr[], int n){
    float luongtb;
    luongtb = luong_tb (arr,n);
    printf("\n--------------------Nhan vien co luong < luong trung binh cua cty-------------------------------\n");
    printf("\n%12s|%25s|%20s|%10s","Ma NV","Ten NV","Don vi","Luong");
    for (size_t i = 0 ; i < n ; i++){
        if (arr[i].luong < luongtb){
            //Dieu kien dung tien hanh in ra
            printMotNhanVien(arr[i]);
        }
    }
}
/*In tat ca nhan vien cung don vi voi nhan vien tim thay o cau 3*/
void printNVCungDonVi (NHANVIEN arr[], int n, int vt){
    if (vt == -1){
        printf("\nCo dau ma doi tim!!!");
    }
    else{
        printf("\n-----------------------Nhan vien cung don vi voi nhan vien tim thay o cau 3----------------------------\n");
        printf("\n%12s|%25s|%20s|%10s","Ma NV","Ten NV","Don vi","Luong");
        for (size_t i = 0 ; i < n ; i++){
            if (strcmp(arr[vt].don_vi,arr[i].don_vi) == 0){
                printMotNhanVien(arr[i]);
            }
        }
    }
}
/*XONG*/
