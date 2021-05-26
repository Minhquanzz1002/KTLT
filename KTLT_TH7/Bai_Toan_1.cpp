#include <stdio.h>
#include <math.h>
#include <time.h>
#define MAX 100
void input (int a[], int n);
void output (int a[], int n);
void total (int a[], int n);
void ghiFiletxt(int a[], int n);
void DocFileTxt (int c[], int k);
void GhiFileNhiPhan(int a[], int n);
void DocFileNhiPhan(int b[], int m);
void XuatFile(int b[], int m);
int main(){
    int a[MAX], b[MAX], c[MAX];
    int n, m, k;
    srand(time(0));
    printf("How many number: ");
    scanf("%d",&n);
    input(a,n);
    output(a,n);
    ghiFiletxt(a,n);
    DocFileTxt(c,k);
    GhiFileNhiPhan(a,n);
    DocFileNhiPhan(b,m);


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
    f = fopen("D:\\D\\Document\\KTLT_KH2_2021\\File_Code\\TH7_BaiToan1.txt","w");     /**/
    fprintf(f,"%d\n",n);
    for (int i = 1; i<= n ; i++){
        fprintf(f,"%5d",a[i]);
    }
    fclose(f);
    printf("\nGhi file thanh cong!!!");
}
/*Doc file txt*/
void DocFileTxt (int c[], int k){
    FILE *f;
    f = fopen("D:\\D\\Document\\KTLT_KH2_2021\\File_Code\\TH7_BaiToan1.txt","r");
    if (f == NULL){
        printf("\nCan not open file!!!");
    }
    else{
        fscanf(f,"%d\n",&k);
        for (int i = 1; i<= k ; i++){
            fscanf(f,"%d",&c[i]);
        }
        XuatFile(c,k);
        fclose(f);
        printf("\nDoc file txt thanh cong!!!");
    }
}
/*Ghi file dang nhi phan*/
void GhiFileNhiPhan (int a[], int n){
    FILE *fp;
    if ((fp = fopen("D:\\D\\Document\\KTLT_KH2_2021\\File_Code\\TH7_BaiToan1.bin","wb")) == NULL ){
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
    if ( (fp = fopen("D:\\D\\Document\\KTLT_KH2_2021\\File_Code\\TH7_BaiToan1.bin","rb")) == NULL){
        printf("Khong the mo file!!!");
    }
    else{
        fread(&m,sizeof(int),1,fp);
        for (int i =1 ; i<= m ; i++){
            fread(&b,sizeof(int),1,fp);
        }
    }
    fclose(fp);
    printf("\nDoc file nhi phan thanh cong!!!");
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
/*XONG*/
