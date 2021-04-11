#include <stdio.h>
#define MAX 100
#include <time.h>
#include <stdlib.h>
void input (int *p, int n);
void output (int *p, int n);
int sumArray(int *p, int n);
void sortUp(int *p, int n);
int main(){
    int a[MAX], n;
    int *p;
    printf("Nhap so luong PT mang: ");
    scanf("%d",&n);
    srand(time(0));
    input(a,n);
    printf("Output array: ");
    output(a,n);
    printf("\nSum array: %d",sumArray(a,n));
    printf("\nMang tang dan: ");
    sortUp(a,n);
    output(a,n);
}
/*Nhap mang*/
void input(int *p, int n){
    for (int i = 0 ; i< n; i++){
        *p = 1 + rand()%100;
        p++;
    }
}
/*Xuat mang*/
void output(int *p, int n){
    for (int i = 0 ; i< n; i++){
        printf("%5d",*p);
        p++;
    }
}
/*Tong mang*/
int sumArray (int *p, int n){
    int sum = 0;
    for (int i = 0 ; i< n; i++){
        sum += *p;
        p++;
    }
    return sum;
}
/*Sap xep tang dan*/
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