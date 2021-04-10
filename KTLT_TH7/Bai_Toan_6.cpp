/*In noi dung cua file cua bao gom chu va so*/
#include <stdio.h>
#include <string.h>
#define MAX 1000
void nhapvaofile(char nhap[]);
void loaiBoKiTuDB (char xuat[]);
void docfile(char xuat[]);
int main(){
    char nhap[MAX], xuat[MAX];
    printf("Enter string: ");
    fgets(nhap,sizeof(nhap),stdin);
    nhapvaofile(nhap);
    docfile(xuat);
    loaiBoKiTuDB(xuat);
    printf("Noi dung cua file file:\"");
    for ( int i = 0 ; i < strlen(xuat); i++){
        putchar(xuat[i]);
    }
    printf("\"");
    return 0;
}
/*Nhap noi dung vao file*/
void nhapvaofile (char nhap[]){
    FILE *f;
    f = fopen("D:\\C\\Code\\File_Code\\bai_tap_6_TH7.txt","w");
    if ( f == NULL)
        printf("Khong the mo file");
    fprintf(f,"%s",nhap);
    fclose(f);
}
/*Loai bo ki tu dac khoi chuoi*/
void loaiBoKiTuDB (char xuat[]){
    for (int i = 0 ; i < strlen(xuat) ; i++){
        while(!(xuat[i] >= 'A' && xuat[i] <= 'Z') && !(xuat[i] >= 'a' && xuat[i] <= 'z') && !(xuat[i] >= '0' && xuat[i] <= '9')){
            strcpy(&xuat[i],&xuat[i+1]);
            i--;
        }
    }
}
/*Doc noi dung ghi vao file*/
void docfile (char xuat[]){
    FILE *f;
    f = fopen("D:\\C\\Code\\File_Code\\bai_tap_6_TH7.txt","r");
    if (f == NULL )
        printf("Khong the mo file");
    fgets(xuat,int(MAX),f);
    fclose(f);
}