/*Nhap password an thay the bang day '*' */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
int main(){
    int check = 1;
    while(check != 0){
        system("cls");
        char pwd[9];
        printf("\nEnter Password: ");
        int i;
        for (i = 0 ; i < 8; i++){
            pwd[i] = getch();
            printf("*");
        }
        pwd[i] = '\0';
        char re_pwd[9];
        printf("\nRe-enter the password: ");
        for (i = 0 ; i < 8; i++){
            re_pwd[i] = getch();
            printf("*");
        }
        re_pwd[i] = '\0';
        // printf("\n%s",pwd);
        // printf("\n%s",re_pwd);
        if (strcmp(pwd,re_pwd) == 0){
            check = 0;
            printf("\nNhap password thanh cong");
        }
        else{
            check = 1;
            printf("\nLoi!!! Nhap lai");
        }
        getch();
    }
}