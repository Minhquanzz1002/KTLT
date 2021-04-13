/*Xoa tat ca ki tu khac ki tu bang chu cai khoi chuoi*/
#include <stdio.h>
#include <string.h>
#define MAX 100
void XoaKtDB (char str1[], char str2[]);
void XoaKtDB2 (char str[]);
int main(){
    char str1[MAX], str2[MAX];
    printf("Enter a string: ");
    gets(str1);
    // XoaKtDB(str1,str2);
    // printf("Displaying string: ");
    // puts(str2);
    XoaKtDB2(str1);
    printf("Displaying string: ");
    puts(str1);
}
/*Cach 1 ghi cac ki tu thuoc chu cai vao chuoi str2*/
void XoaKtDB (char str1[], char str2[]){
    int i, j;
    for (i = 0,j = 0; i <= strlen(str1); i++){
        if ((str1[i] >= 'a') && (str1[i] <= 'z')||(str1[i] >= 'A') && (str1[i] <= 'Z')){
            str2[j] = str1[i];
            j++;
        }
    }
    str2[j] = '\0';
}
/*Cach 2 thao tac truc tiep tren chuoi str1*/
void XoaKtDB2 (char str[]){
    int i, j;
    for ( i =0 ; str[i] != '\0'; i++){
        while (!((str[i]>='a'&&str[i]<='z') || (str[i]>='A'&&str[i]<='Z') || (str[i]=='\0'))){
            strcpy(&str[i],&str[i+1]);
        }
    }
}