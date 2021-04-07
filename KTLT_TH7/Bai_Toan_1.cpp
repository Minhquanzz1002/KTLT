#include <stdio.h>
#include <math.h>
#include <time.h>
#define MAX 100
void input (int a[], int n);
void output (int a[], int n);
void total (int a[], int n);
int main(){
    int a[MAX];
    int n;
    srand(time(0));
    printf("How many number: ");
    scanf("%d",&n);
    input(a,n);
    output(a,n);
    total(a,n);
}
/*Nhap mang*/
void input (int a[], int n){
    for (int i = 1 ; i <=n ; i++){
        a[i] = 1 + rand()%100;
    }
}
/*Xuat mang*/
void output (int a[], int n){
    for ( int i = 1 ; i<= n ; i++){
        printf("%d\t",a[i]);
    }
}
/*Tinh tong binh phuong*/
void total (int a[], int n){
    int sum = 0;
    for ( int i = 1 ; i <= n ; i++){
        sum = sum + pow(a[i],2);
    }
    printf("\nOutput: %d",sum);
}


