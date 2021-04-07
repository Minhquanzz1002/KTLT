#include <stdio.h>
#include <math.h>
#include <time.h>
#define MAX 100
void input (int a[], int n);
void output (int a[], int n);
void total (int a[], int n);
void ghiFiletxt(int a[], int n);
void GhiFileNhiPhan(int a[], int n);
void DocFileNhiPhan(int b[], int m);
void XuatFile(int b[], int m);
int main(){
    int a[MAX], b[MAX];
    int n, m;
    srand(time(0));
    printf("How many number: ");
    scanf("%d",&n);
    input(a,n);
    output(a,n);
    //total(a,n);
    ghiFiletxt(a,n);
    GhiFileNhiPhan(a,n);
    DocFileNhiPhan(b,m);
    //XuatFile(b,m);
}
/*Nhap mang*/
void input (int a[], int n){
    for (int i = 1 ; i <=n ; i++){
        a[i] = 1 + rand()%100;
    }
}
/*Xuat mang*/
void output (int a[], int n){
    for ( int i = 1 ; i<= n ; i++){
        printf("%d\t",a[i]);
    }
}
/*Tinh tong binh phuong*/
void total (int a[], int n){
    int sum = 0;
    for ( int i = 1 ; i <= n ; i++){
        sum = sum + pow(a[i],2);
    }
    printf("\nOutput: %d",sum);
}
/*Ghi file dang txt*/
/*Lam cho vui*/
void ghiFiletxt (int a[], int n){
    FILE *f;
    f = fopen("INPUT.txt","w");     /**/
    fprintf(f,"%d\n",n);
    for (int i = 1; i<= n ; i++){
        fprintf(f,"%5d",a[i]);
    }
    fclose(f);
    printf("\nGhi file thanh cong!!!");
}
/*Ghi file dang nhi phan*/
void GhiFileNhiPhan (int a[], int n){
    FILE *fp;
    if ((fp = fopen("INPUT.bin","wb")) == NULL ){
        printf("Khong the ghi duoc !!!");
    }
    else{
        fwrite(&n,sizeof(int),1,fp);
        for (int i = 1; i <= n ; i++){
            fwrite(&a,sizeof(int),1,fp);
        }
    }
    fclose(fp);
    printf("\nGhi file nhi phan thanh cong!!!");
}
/*Doc file nhi phan*/
void DocFileNhiPhan (int b[], int m){
    FILE *fp;
    if ( (fp = fopen("INPUT.bin","rb")) == NULL){
        printf("Khong the mo file!!!");
    }
    else{
        fread(&m,sizeof(int),1,fp);
        for (int i =1 ; i<= m ; i++){
            fread(&b,sizeof(int),1,fp);
        }
    }
    fclose(fp);
    printf("\nDoc file thanh cong!!!");
    XuatFile(b,m);
    total(b,m);
}
/*Xuat du lieu doc duoc trong file*/
void XuatFile (int b[], int m){
    printf("\nDu lieu doc duoc:");
    for (int i = 1; i<= m ; i++){
        printf("%5d",b[i]);
    }
}