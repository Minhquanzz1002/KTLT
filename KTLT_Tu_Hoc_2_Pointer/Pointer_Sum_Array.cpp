#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define MAX 100
void input (int a[], int n);
void output (int a[], int n);
int sumArray (int *array, int n);
int main(){
    int n, *array;
    int a[MAX];
    array = a;  /*a = &a[0]*/
    printf("How many number: ");
    scanf("%d",&n);
    srand(time(0));
    input(a,n);
    output(a,n);
    printf("\nTong mang: %d",sumArray(array,n));
    return 0;
}
/*Nhap mang*/
void input(int a[], int n){
    for (int i = 0 ; i< n; i++){
        a[i] = 1 + rand()%100;
    }
}
/*Xuat mang*/
void output(int a[], int n){
    for (int i = 0 ; i< n; i++){
        printf("%5d",a[i]);
    }
}
/*Tong mang*/
int sumArray (int *array, int n){
    int sum = 0;
    for (int i = 0 ; i< n; i++){
        sum += *(array + i);
    }
    return sum;
}