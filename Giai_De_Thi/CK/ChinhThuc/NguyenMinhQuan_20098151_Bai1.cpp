#include <stdio.h>
typedef struct{
    char ma_bn[10];
    char ten_bn[30];
    int tuoi;
    float chieucao;
    float cannang;
    float BMI;
}BENHNHAN;
void input_one(BENHNHAN &bn);

void input_list(BENHNHAN B[], int &n);

void tinhBMI(BENHNHAN B[], int n);

void print(BENHNHAN B[], int n);

void sucKhoe(BENHNHAN bn);
int main(){
    BENHNHAN B[100];
    int n;
    input_list(B,n);
    tinhBMI(B,n);
    print(B,n);
}
void input_one(BENHNHAN &bn){
    printf("\nNhap ma so benh nhan: ");
    fflush(stdin);
    gets(bn.ma_bn);
    printf("Nhap ten benh nhan: ");
    fflush(stdin);
    gets(bn.ten_bn);
    printf("Nhap tuoi: ");
    scanf("%d",&bn.tuoi);
    printf("Nhap chieu cao: ");
    scanf("%f",&bn.chieucao);
    printf("Nhap can nang: ");
    scanf("%f",&bn.cannang);
}
void input_list(BENHNHAN B[],int &n){
    printf("\nNhap so luong: ");
    scanf("%d",&n);
    for (int i = 0; i < n; i++){
        printf("\n---------------------------------------------------\n");
        printf("Nhap thong tin cho %d",i+1);
        input_one(B[i]);
    }
}
void tinhBMI (BENHNHAN B[], int n){
    for(int i = 0; i < n; i++){
        B[i].BMI = B[i].cannang / (B[i].chieucao*B[i].chieucao);
    }
}
void sucKhoe(BENHNHAN bn){
    float bmi = bn.BMI;
    if (bmi > 29.9){
        printf("Beo phi");
    }
    else if(bmi > 24.9){
        printf("Thua can");
    }
    else if(bmi > 18.5){
        printf("Binh thuong");
    }
    else{
        printf("Thieu can");
    }
}
void print(BENHNHAN B[], int n){
    printf("\n%3s %20s %30s %10s %10s %10s %10s %10s","STT","Ma so benh nhan","Ten benh nhan","Tuoi","Chieu cao","Can nang","Chi so BMI","Ghi chu");
    for(int i = 0 ; i < n; i++){
        printf("\n%3d %20s %30s %10d %10.2f %10.2f %10.2f",i+1,B[i].ma_bn,B[i].ten_bn,B[i].tuoi,B[i].chieucao,B[i].cannang,B[i].BMI);
        sucKhoe(B[i]);
    }
}

