#include <stdio.h>
#include <stdlib.h>
void enterArr (int *p, int n);

void printArr (int *p, int n);

void enterArrBoSung (int *p, int n, int x);
int main(){
    int n;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d",&n);

    int *p = (int*)malloc(n*sizeof(int));
    if (p == NULL){
        printf("\nKhong the cap phat bo nho");
    }
    
    enterArr(p,n);
    printArr(p,n);

    //Them gia tri cho mang
    int x;
    printf("\nNhap kich thuoc moi cho mang: ");
    scanf("%d",&x);
    //Khai bao cap phat them bo nho
    realloc(p,x);
    enterArrBoSung(p,n,x);
    printArr(p,x);
}
void enterArr(int *p, int n){
    for (size_t i = 0; i < n ; i ++){
        printf("Arr[%d] = ",i+1);
        scanf("%d",p + i);
    }
}
void printArr (int *p, int n){
    for (size_t i = 0 ; i < n; i ++){
        printf("%5d",*(p+i));
    }
}
void enterArrBoSung (int *p, int n, int x){
    for (size_t i = n; i < x ; i ++){
        printf("Arr[%d] = ",i+1);
        scanf("%d",p + i);
    }
}
/*XONG*/