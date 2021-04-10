#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define MAX 100
void Input(int a[], int n);
void Output(int a[], int n);
int main(){
    int n;
    int a[MAX];
    printf("How many number: ");
    scanf("%d",&n);
    srand(time(0));
    Input(a,n);
    Output(a,n);
}
/*Nhap mang*/
void Input (int a[], int n){
    for (int i = 1 ; i <= n; i++){
        a[i] = 1 + rand()%100;
    }
}
/*Xuat mang*/
void Output (int a[], int n){
    printf("Array: ");
    for ( int  i = 1; i <= n; i++){
        printf("%5d",a[i]);
    }
}
/*Ghi file*/
void ghifile (int a[], int n){
    FILE *fp;
    fp = fopen("","wb");
    if (fp == NULL){
        printf("Khong the mo file!!!");
        exit(0);
    }
    fwrite(&n,sizeof(int),1,fp);
    for ( int i = 1; i<= n; i++){
        fwrite(&a[i],sizeof(int),1,fp);
    }
    fclose(fp);
}
/*Doc noi dung file*/
void docfile (int b[], int m){
    FILE *fp;
    fp = fopen("","rb");
    if (fp == NULL){
        printf("Khong the mo file!!!");
        exit(0);
    }
    fread(&m,sizeof(int),1,fp);
    for (int i = 1 ;i <= m; i++){
        fread(&b[i],sizeof(int),1,fp);
    }
    fclose(fp);
}
