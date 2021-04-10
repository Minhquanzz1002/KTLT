#include <stdio.h>
#define MAX 100
typedef struct{
    char name[30];
    int age;
    int salary;     /*Tien luong*/
} NV;
void Input (NV nv1[], int n);
void nhapFile(NV nv1[], int n);
void docFile(NV nv2[], int n);
int main(){
    NV nv1[MAX], nv2[MAX];
    int n, m;
    printf("How many staff: ");
    scanf("%d",&n);
    nhapFile(nv1,n);
}
/*Nhap thong tin nhan vien*/
void Input (NV nv1[], int n){
    for (int i = 1; i<= n ; i++){
        printf("\n------------------------------\n");
        printf("Enter information for staff %d: ",i);
        printf("\nEnter name: ");
        fflush(stdin);
        gets(nv1[i].name);
        printf("Enter age: ");
        scanf("%d",&nv1[i].age);
        printf("Enter salary: ");
        scanf("%d",&nv1[i].salary);
    }
}
/*Nhap vao file*/
void nhapFile (NV nv1[], int n){
    FILE *fp;
    fp = fopen("C:\\Users\\DELL\\Desktop\\baitap2.bin","wb");
    if (fp == NULL){
        printf("Khong the mo file");
        exit(0);
    }
    fwrite(&n,sizeof(int),1,fp);
    for (int i = 1;  ; i++){
        printf("\n------------------------------\n");
        printf("Enter information for staff %d: ",i);
        printf("\nEnter name: ");
        fflush(stdin);
        gets(nv1[i].name);
        printf("Enter age: ");
        scanf("%d",&nv1[i].age);
        printf("Enter salary: ");
        scanf("%d",&nv1[i].salary);
        fwrite(&nv1[i],sizeof(nv1),1,fp);
    }
    fclose(fp);
}
/*Doc file*/
void docFile(NV nv2[], int m){
    FILE *fp;
    fp = fopen("C:\\Users\\DELL\\Desktop\\baitap2.bin","rb");
    if (fp == NULL){
        printf("khong the mo file!!!");
        exit(0);
    }
    for (int i = 1; i<= m){
        fread(&nv2[i],sizeof(nv2),1,fp);
    }
}