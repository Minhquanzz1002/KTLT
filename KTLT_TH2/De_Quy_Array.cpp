#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void input (int a[], int n);
void output (int a[], int n);
int Max (int a[], int n);
int Min (int a[], int n);
int SumArr (int a[], int n);
int main(){
    int a[100], n;
    printf("Nhap n: ");
    scanf("%d",&n);
    srand(time(0));
    input(a,n);
    output(a,n);
    printf("\nGia tri lon nhat la: %d",Max(a,n));
    printf("\nGia tri lon nhat la: %d",Min(a,n));
    printf("\nTong mang: %d",SumArr(a,n));
}
/*Tim gia tri lon nhat*/
int Max (int a[], int n){
    if (n==1)
        return a[1];
    else{
        if (a[n] > Max(a,n-1)){
            return a[n];
        }
        else{
            return Max(a,n-1);
        }
    }
}
int Min (int a[], int n){
    if (n==1)
        return a[1];
    else{
        if (a[n] < Min(a,n-1))
            return a[n];
        else
            return Min(a,n-1);
    }
}
int SumArr (int a[], int n){
    if (n==1)
        return a[1];
    return SumArr(a,n-1)+a[n];
}
/*Nhap mang*/
void input (int a[], int n){
    for (int i = 1; i<=n; i++){
        a[i] = 1 + rand()%100;
    }
}
/*In ra man hinh*/
void output (int a[], int n){
    for (int i = 1; i<=n; i++){
        printf("%5d",a[i]);
    }
}