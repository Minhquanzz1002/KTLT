#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
typedef struct{
    int sbd;
    char name[30];
    float dT;
    float dL;
    float dTong;
}SINHVIEN;
void enter_1(SINHVIEN &sv);

void enter_2(SINHVIEN arr[], int &n);

void output(SINHVIEN arr[], int n);

void tongDiem(SINHVIEN arr[], int n);

void themMotSV(SINHVIEN arr[], int &n);

void delSV(SINHVIEN arr[], int &n);

void timDiemLonNhat(SINHVIEN arr[], int n, int &max);

void printDiemLonNhat(SINHVIEN arr[], int n);
int main(){
    SINHVIEN sv, arr[10];
    int n;
    enter_2(arr,n);
    tongDiem(arr,n);
    system("cls");
    output(arr,n);
    system("cls");
    themMotSV(arr,n);
    system("cls");
    output(arr,n);
    getch();
    system("cls");
    delSV(arr,n);
    printDiemLonNhat(arr,n);
}
/*Ham nhap mot sinh vien*/
void enter_1 (SINHVIEN &sv){
    printf("\nNhap so bao danh: ");
    scanf("%d",&sv.sbd);
    printf("Nhap ho ten: ");
    fflush(stdin);
    gets(sv.name);
    do{
        printf("Nhap diem Toan: ");
        scanf("%f",&sv.dT);
    }
    while(sv.dT < 0 || sv.dT > 10);
    do{
        printf("Nhap diem Li: ");
        scanf("%f",&sv.dL);
    }
    while(sv.dL < 0 || sv.dL > 10);
}
/*Ham nhap nhieu sinh vien*/
void enter_2(SINHVIEN arr[], int &n){
    printf("Nhap so luong sinh vien: ");
    scanf("%d",&n);
    for (int i = 0 ; i < n; i++){
        printf("\n-------------------------------------------------------\n");
        printf("Nhap thong tin cho sinh vien %d",i+1);
        enter_1(arr[i]);
    }
}
/*Ham hien thi thong tin*/
void output(SINHVIEN arr[], int n){
    printf("\n%10s%25s%10s%10s%10s","Sbd","Ho va ten","Diem toan","Diem li","Tong diem");
    for (int i = 0; i < n; i++){
        printf("\n%10d%25s%10.2f%10.2f%10.2f",arr[i].sbd,arr[i].name,arr[i].dT,arr[i].dL,arr[i].dTong);
    }
}
/*Ham tinh tong diem*/
void tongDiem(SINHVIEN arr[], int n){
    for (int i = 0; i < n; i++){
        arr[i].dTong = arr[i].dT + arr[i].dL;
    }
}
/*Ham bo sung 1 sinh vien*/
void themMotSV(SINHVIEN arr[], int &n){
    printf("\nBo sung 1 sinh vien");
    enter_1(arr[n]);
    n++;
    tongDiem(arr,n);
}
/*Ham xoa 1 sinh vien*/
void delSV (SINHVIEN arr[], int &n){
    int delSbd;
    int count = -1;
    printf("\nNhap so bao danh sinh vien can xoa: ");
    scanf("%d",&delSbd);
    for(int i= 0; i < n; i++){
        if (arr[i].sbd == delSbd){
            count ++;
            for (int j = i; j < n -1 ; j++){
                arr[j] = arr[j+1];
            }
            n--;
        }
    }
    if (count == -1){
        printf("Khong tim thay");
    }
    else
        printf("Da xoa");
    output(arr,n);
}
/**/
float timDiemLonNhat(SINHVIEN arr[], int n){
    float max = 0;
    for(int i = 0; i < n ; i++){
        if (arr[i].dTong > max && (arr[i].dT != 0 && arr[i].dL != 0)){
            max = arr[i].dTong;
        }
    }
    return max;
}
/*In ra sinh vien co diem tong lon nhat*/
void printDiemLonNhat(SINHVIEN arr[], int n){
    system("cls");
    printf("\nNhung sinh vien cho diem tong lon nhat");
    int dTongMax = timDiemLonNhat(arr,n);
    printf("\n%10s%25s%10s%10s%10s","Sbd","Ho va ten","Diem toan","Diem li","Tong diem");
    for (int i = 0 ; i < n ; i++){
        if (arr[i].dTong == dTongMax && (arr[i].dT != 0 && arr[i].dL != 0) ){
            printf("\n%10d%25s%10.2f%10.2f%10.2f",arr[i].sbd,arr[i].name,arr[i].dT,arr[i].dL,arr[i].dTong);
        }
    }
}
/*XONG*/
