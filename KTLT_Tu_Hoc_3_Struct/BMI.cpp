#include <stdio.h>
#include <string.h>
typedef struct{
    int kg;         //So ki//
    float m;        //Chieu cao//
    char gen[3];    //Gioi tinh //M la nam, F la nu
} BMI;
void input (BMI &P);
float tinhBMI (BMI P);
void SucKhoe (BMI P);
void displaying (BMI P);
int main(){
    BMI P;
    input(P);
    printf("%.2f",tinhBMI(P));
    displaying(P);
}
/*Nhap thong tin BMI*/
void input (BMI &P){
    printf("\nNhap so ki: ");
    scanf("%d",&P.kg);
    printf("Nhap chieu cao: ");
    scanf("%f",&P.m);
    printf("Nhap gioi tinh: ");
    fflush(stdin);
    gets(P.gen);
}
/*Tinh BMI*/
float tinhBMI (BMI P){
    return P.kg/(P.m*P.m);
}
/*Xet tinh trang suc khoe*/
void SucKhoe (BMI P){
    float bmi;
    bmi = tinhBMI(P);
    if (bmi < 18.5)
        printf("Gay");
    else if (bmi < 24.9)
        printf("Binh thuong");
    else
        printf("Thua can");
}
/*Hien thi thong tin*/
void displaying (BMI P){
    printf("\n%3s%10s%10s%10s%10s%10s","STT","CAN NANG","CHIEU CAO","GIOI TINH","BMI","CHU THICH");
    printf("\n1  %10d%10.2f%10s%10.2f ",P.kg,P.m,P.gen,tinhBMI(P));
    SucKhoe(P);
}