/*Doc du lieu tu 1 file va in ra chu va so trong file*/
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
void readFile (char *FileName);
void xoaXuongDong(char x[]);
void inChuVaSo (char x[]);
int main(){
    readFile("D:\\D\\Document\\KTLT_KH2_2021\\File_Code\\TH7_BaiToan6.txt");
}
void readFile (char *FileName){
    FILE *f;
    f = fopen(FileName,"r");
    if (f == NULL){
        printf("\nCan not open file!!!");
        exit(0);
    }
    else{
        /*Lay du lieu*/
        char str[100];
        while(!feof(f)){
            fgets(str,100,f);
        }
        fclose(f);
        /*Xu li du lieu*/
        xoaXuongDong(str);
        printf("\nChuoi doc duoc la: \"%s\"",str);
        inChuVaSo(str);
    }
}
/*Ham xoa ki tu xuong dong*/
void xoaXuongDong(char x[]){
    size_t len = strlen(x);
    if (x[len - 1] == '\n'){
        x[len - 1] = '\0';
    }
}
/*Ham in chu va so*/
void inChuVaSo (char x[]){
    printf("\nChuoi chi bao gom chu va so la: \"");
    for (int i = 0; i < strlen(x); i++){
        if (isalnum(x[i]) != 0){
            printf("%c",x[i]);
        }
    }
    printf("\"");
}
/*XONG*/