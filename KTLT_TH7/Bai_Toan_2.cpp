#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct{
    char name[30];
    int age;
    int salary;     /*Tien luong*/
} NV;
void input (NV nv1[], int &n);
void ghiFile (NV nv1[], int n);
void docFile (NV nv1[], int &n);
void output(NV nv2[], int n);
int main(){
    NV nv2[50], nv1[50];
    int n, m;
    input(nv2,n);
    output(nv2,n);
    ghiFile(nv2,n);
    docFile(nv1,m);
    output(nv1,m);
}
/*Nhap thong tin nhan vien*/
void input (NV nv1[], int &n){
    for (n = 1; ;n++){
        #define nv nv1[n]
        printf("\n------------------------------\n");
        printf("Enter information for staff %d: ",n);
        printf("\nEnter name: ");
        fflush(stdin);
        gets(nv.name);
        if (strlen(nv.name) == 0){
            n -= 1;
            return;
        }
        printf("Enter age: ");
        scanf("%d",&nv.age);
        printf("Enter salary: ");
        scanf("%d",&nv.salary);
    }
}

void ghiFile (NV nv1[], int n){
    FILE *fp;
    fp = fopen("D:\\D\\Document\\KTLT_KH2_2021\\File_Code\\INPUT.bin","wb");
    if (fp == NULL){
        printf("\nCannot open file!!!");
    }
    fwrite(&n,sizeof(int),1,fp);
    for (int i = 1; i<= n; i++){
        fwrite(&nv1[i],sizeof(int),1,fp);
    }
    fclose(fp);
    printf("\nLuu thong tin thanh cong");
}
void docFile (NV nv1[], int &n){
    FILE *fp;
    fp = fopen("D:\\D\\Document\\KTLT_KH2_2021\\File_Code\\INPUT.bin","rb");
    if (fp == NULL){
        printf("\nCannot open file!!!");
    }
    fread(&n,sizeof(int),1,fp);
    for (int i = 1; i<= n; i++){
        fread(&nv1[i],sizeof(int),1,fp);
    }
    fclose(fp);
}
/*in thong thin nhan vien*/
void output(NV nv1[] , int n){
    printf("\n-----------Thong tin nhan vien----------------");
    printf("\n%3s %20s %10s %10s","STT","HO TEN","TUOI","LUONG");
    for (int i = 1; i<= n ;i++){
        #define nv nv1[i]
        printf("\n%3d %20s %10d %10d",i,nv.name,nv.age,nv.salary);
    }
}
