/*Ghi mang vao file , doc file va bo sung, sua, xoa*/
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define MAX 100
void Input(int a[], int n);
void Output(int a[], int n);
void docfile (int b[], int &m);
void ghifile (int a[], int n);
void boSung(int a[], int &n);
void boSungVaoVTBatKi (int a[], int &n);
void XoaMotPT (int a[], int &n);
int main(){
    int n = 10;
    int m;
    int b[MAX];
    int a[MAX];
    srand(time(0));
    Input(a,n);
    Output(a,n);
    //boSung(a,n);
    //Output(a,n);
    // boSungVaoVTBatKi(a,n);
    // Output(a,n);
    // XoaMotPT(a,n);
    // Output(a,n);
    ghifile(a,n);
    docfile(b,m);
    Output(b,m);
}
/*Nhap mang*/
void Input (int a[], int n){
    for (int i = 1 ; i <= n; i++){
        a[i] = 1 + rand()%100;
    }
}
/*Xuat mang*/
void Output (int a[], int n){
    printf("\nArray: ");
    for ( int  i = 1; i <= n; i++){
        printf("%5d",a[i]);
    }
}
/*Ghi file*/
void ghifile (int a[], int n){
    FILE *fp;
    fp = fopen("D:\\D\\Document\\KTLT_KH2_2021\\File_Code\\INPUT.bin","wb");
    if (fp == NULL){
        printf("\nCannot open file!!!");
        exit(0);
    }
    fwrite(&n,sizeof(int),1,fp);
    for ( int i = 1; i<= n; i++){
        fwrite(&a[i],sizeof(int),1,fp);
    }
    fclose(fp);
    printf("\nGhi vao file thanh cong");
}
/*Doc noi dung file*/
void docfile (int b[], int &m){
    FILE *fp;
    fp = fopen("D:\\D\\Document\\KTLT_KH2_2021\\File_Code\\INPUT.bin","rb");
    if (fp == NULL){
        printf("Cannot open file!!!");
        exit(0);
    }
    fread(&m,sizeof(int),1,fp);
    for (int i = 1 ;i <= m; i++){
        fread(&b[i],sizeof(int),1,fp);
    }
    fclose(fp);
}
/*Bo sung vao sau*/
void boSung(int a[], int &n){
    int them;
    printf("\nNhap so luong muon bo sung: ");
    scanf("%d",&them);
    for ( int i = n +1 ; i <= (n + them); i++){
        printf("\nNhap phan tu thu %d: ",i);
        scanf("%d",&a[i]);
    }
    n += them;
}
/*Them gia tri vao vi tri bat ki*/
void boSungVaoVTBatKi (int a[], int &n){
    int VT, GT;
    do
    {
        printf("\nNhap VT muon bo sung: ");
        scanf("%d",&VT);
    } while (VT < 0 || VT > n + 1 );
    printf("\nNhap gia tri muon them: ");
    scanf("%d",&GT);
    for (int i = n +1; i > VT ; i--){
        a[i] = a[i -1];
    }
    a[VT] = GT;
    n += 1;
}
/*Xoa phan tu*/
void XoaMotPT (int a[], int &n){
    int VT;
    do{
        printf("\nNhap VT muon xoa: ");
        scanf("%d",&VT);
    }while(VT <= 0 || VT > n );
    for (int i = VT; i <= n; i++){
        a[i] = a[i +1];
    }
    n -= 1;
} 
