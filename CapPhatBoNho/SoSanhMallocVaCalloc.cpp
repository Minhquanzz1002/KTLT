/*
    Noi dung                malloc          calloc
    - Khoi tao gia tri:     khong           co
    - So luong tham so:     1               2
    - Tra ve: con tro tro toi dau vung nho duoc cap phat hoac NULL trong 
    truong hop khong du bo nho
*/
#include <stdio.h>
#include <stdlib.h>
void showInfo (int *a);
int main(){
    /**/
    puts("Use malloc: ");
    //Cap phat bo nho bang malloc
    int *a = (int*)malloc(10*sizeof(int));
    showInfo(a);
    //Giai phong bo nho
    free(a);
    //----------------------------------//
    puts("Use calloc: ");
    //Cap phat bo nho bang calloc
    a = (int*)calloc(10,sizeof(int));
    showInfo(a);
    //Gia phong bo nho
    free(a);
}
void showInfo (int *a){
    for (size_t i = 0 ; i < 10 ; i ++){
        printf("%5d",a[i]);
    }
    printf("\n");
}
