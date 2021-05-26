#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct{
    char ma_sv[12];
    char ten_sv[30];
    char ma_lop[10];
    float D10, D4;
}SinhVien;
SinhVien A[500];
void input_one(SinhVien &sv);
void input_list(SinhVien A[],int &n);
void output_list(SinhVien A[], int n);
int main(){
    SinhVien sv;
    int n;
    input_list(A,n);
    output_list(A,n);
}
void input_one(SinhVien &sv){
    printf("\nNhap ma sinh vien: ");
    fflush(stdin);
    gets(sv.ma_sv);
    printf("Nhap ten sinh vien: ");
    fflush(stdin);
    gets(sv.ten_sv);
    printf("Nhap ma lop: ");
    fflush(stdin);
    gets(sv.ma_lop);
    do{
        printf("Nhap diem (thang 10): ");
        scanf("%f",&sv.D10);
    }while(sv.D10 < 0 || sv.D10 > 10);
}
void input_list(SinhVien A[],int &n){
    printf("\nNhap so luong sinh vien: ");
    scanf("%d",&n);
    for (int i = 0; i < n; i++){
        printf("\n-------------------------------------------\n");
        printf("Nhap thong tin cho sinh vien %d", i + i);
        input_one(A[i]);
        A[i].D4 = 0.4 * A[i].D10;
    }
}
void output_list(SinhVien A[], int n){
    char ma_lop_hoc[10];
    printf("\nNhap ma lop hoc can in: ");
    fflush(stdin);
    gets(ma_lop_hoc);
    printf("\n\t\tBang diem KTLT-Lop: %s",ma_lop_hoc);
    printf("\n%3s %30s %12s %20s %10s","STT","Ho ten","Ma sinh vien","Diem thang 4","Ghi chu");
    int j = 1;
    for (int i = 0 ; i < n ; i++){
        if (strcmp(A[i].ma_lop,ma_lop_hoc) == 0){
            printf("\n%3d %30s %12s %20.2f",j,A[i].ten_sv,A[i].ma_sv,A[i].D4);
            j++;
            if(A[i].D4 < 1.0){
                printf("     Hoc lai");
            }
        }
    }
}
