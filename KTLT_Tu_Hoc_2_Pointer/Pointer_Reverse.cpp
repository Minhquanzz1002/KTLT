/*Dao nguoc mang*/
#include <stdio.h>
#define MAX 100
#include <time.h>
#include <stdlib.h>
void input (int *p, int n);
void output (int *p, int n);
void reverse (int *p, int n);
int main(){
    int a[MAX], n;
    int *p;
    printf("Nhap so luong PT mang: ");
    scanf("%d",&n);
    srand(time(0));
    input(a,n);
    output(a,n);
    printf("\n");
    reverse(&a[n-1],n);
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
/*In nguoc*/
void reverse (int *p, int n){
    for (int i = n - 1 ; i >= 0 ;i--){
        printf("%5d",*p);
        p--;
    }
}