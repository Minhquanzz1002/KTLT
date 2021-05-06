#include <stdio.h>
#include <string.h>
#include <ctype.h>
void checkName (char name[]);
int isChuCai (char name[]);
int main(){
    char name[30];
    printf("Enter name: ");
    gets(name);
    checkName(name);
}
/*Kiem tra co ki tu ngoai chu cai khong*/
int isChuCai (char name[]){
    int count = 0;
    for (int i = 0 ; i < strlen(name); i++){
        if (isalpha(name[i]) != 0 || name[i] == ' '){
            count += 0;
        }
        else
            count += 1;
    }
    return count;
}
/*Ham kiem tra ten*/
void checkName (char name[]){
    int dem = 0;
    if (isChuCai(name) == 0){
        for (int i = 0 ; i < strlen(name); i++){
            if (i == 0){
                /*Kiem tra khoang trang dau cau*/
                if (name[0] == ' '){
                    printf("\nDu khoang trang o dau");
                    dem += 1;
                }
                else{
                    if (isupper(name[0]) == 0){
                        printf("\nLoi!!Ki tu thu %d phai viet hoa",1);
                        dem += 1;
                    }
                }
            }
            else{
                if (name[i-1] == ' ' && name[i] != ' ' && name[i] != '\0'){
                    if (isupper(name[i]) == 0){
                        printf("\nLoi!!Ki tu thu %d phai viet hoa",i+1);
                        dem +=1;
                    }
                }
                else if (name[i] != ' ')
                    if (islower(name[i]) == 0){
                        printf("\nLoi!!Ki tu thu %d phai viet thuong",i+1);
                        dem += 1;
                    }
            }
        }
        /*Kiem tra loi khoang trang lien tiep*/
        for (int i = 0 ; i < strlen(name); i++){
            if (name[i] == ' ' && name[i+1] == ' '){
                printf("\nLoi!! Khoang trang lien tiep");
                dem += 1;
                break;
            }
        }
        if (name[strlen(name)-1] == ' '){
            /*Kiem tra khoang trang cuoi cau*/
            printf("\nDu khoang trang cuoi cau");
            dem += 1;
        }
        if (dem == 0){
            printf("\nTen nhap dung");
        }
    }
    else{
        printf("\nCo ki tu la");
    }
    
}