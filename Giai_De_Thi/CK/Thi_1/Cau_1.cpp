/*Ghep 2 mang sap xep tang dan (dung con tro va cap phat dong)*/
#include <stdio.h>
#include <stdlib.h>
void enterArr(int *p, int n);
void printArr(int *p, int n);
void ghepHaiMang(int *a,int *b, int &n, int m);
void sortUp (int *p, int n);
int main(){
    int n, m;
    printf("Nhap so phan tu cua mang A: ");
    scanf("%d",&n);
    printf("Nhap so phan tu cua mang B: ");
    scanf("%d",&m);
    int *a = (int*)malloc(n*sizeof(int));
    if (a == NULL){
        printf("\nKhong the cap phat bo nho");
    }
    int *b = (int*)malloc(m*sizeof(int));
    if (b == NULL){
        printf("\nKhong the cap phat bo nho");
    }
    printf("\nNhap Mang A: \n");
    enterArr(a,n);
    printf("\nNhap Mang B: \n");
    enterArr(b,m);
    printf("\nIn mang A: ");
    printArr(a,n);
    printf("\nIn mang B: ");
    printArr(b,m);
    realloc(a,n+m);
    ghepHaiMang(a,b,n,m);
    sortUp(a,n);
    printf("\nMang sau ghi ghep: ");
    printArr(a,n);
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
void ghepHaiMang(int *a,int *b, int &n, int m){
    int j = 0;
    for (int i = n; i < n+n && j < m ; i++){
        *(a+i) = *(b+j);
        j++;
    }
    n = n + m;
}
void sortUp (int *p, int n){
    int temp;
    for ( int i = 0; i < n -1 ;i++ ){
        for (int j = i + 1; j < n; j++){
            if (*(p+i) > *(p+j)){
                temp = *(p+i);
                *(p+i) = *(p+j);
                *(p+j) = temp;
            }
        }
    }
}
