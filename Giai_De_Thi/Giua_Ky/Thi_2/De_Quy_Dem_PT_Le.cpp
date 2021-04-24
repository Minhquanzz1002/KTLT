/*dem so phan tu le trong mang bang de quy*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void input (int *p, int n);
void output (int *p, int n);
int count (int a[], int n);
int main(){
    int n, a[10];
    int *p;
    printf("Nhap so luong PT mang: ");
    scanf("%d",&n);
    srand(time(0));
    input(a,n);
    output(a,n);
    printf("\nSo PT le cua mang: %d",count(a,n));
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
/*Dem so phan tu le bang de quy*/
int count (int a[], int n){
    if (n == -1)
        return 0;
    else{
        if (a[n]%2 != 0)
            return count(a,n-1) +1;
    }
    return count(a,n-1);
}