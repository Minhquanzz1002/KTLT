/*Kiem tra hai ten nhap vao giong nhau khong*/
#include <stdio.h>
#include <string.h>
int main(){
    char str1[100], str2[100];
    scanf("%s%s",str1,str2);
    if (strcmp(str1,str2) == 0){
        printf("Two people having the same name");
    }
    else
        printf("Two people don't have the same name");
}