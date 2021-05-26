/*Khai bao con tro voi chuoi*/
#include <stdio.h>
int main(){
    char *welcome = "Chao ban ";
    char yourname[30];
    printf("\nNhap ten cua ban: ");
    scanf("%s",&yourname);

    printf("%s%s",welcome,yourname);
}
/*XONG*/