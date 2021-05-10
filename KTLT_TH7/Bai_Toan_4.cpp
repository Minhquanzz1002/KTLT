/*Doc du lieu tu 1 file*/
/*Dem xem co bao nhieu chu cai trong file*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
void DocFile (char *FileName);
void xoaXuongDong (char x[]);
int main(){
    DocFile("D:\\D\\Document\\KTLT_KH2_2021\\File_Code\\TH7_BaiToan4.txt");
}
/*Ham doc file*/
void DocFile (char *FileName){
    FILE *f;
    f = fopen(FileName,"r");
    if (f == NULL){
        printf("\nCan not open file!!!");
    }
    else{
        char str[100];
        while(!feof(f)){
            fgets(str,100,f);
        }
        fclose(f);
        printf("\nChuoi doc duoc la:");
        puts(str);
        /*Xu li yeu cau de*/
        int count = 0;
        for (int i = 0 ; i < strlen(str); i++){
            if (isalpha(str[i]) != 0){
                count += 1;
            }
        }
        xoaXuongDong(str);
        printf("\nSo chu cai trong \"%s\" la %d",str,count);
    }
}
/*Ham xoa ki tu xuong dong. Lam cho dep khong can thiet lam*/
void xoaXuongDong (char x[]){
    size_t len = strlen(x);
    // VD chuoi: mot
    // mot\n\0 --> mot\0\0
    if (x[len - 1] == '\n'){
        x[len - 1] = '\0';
    }
}
/*XONG*/