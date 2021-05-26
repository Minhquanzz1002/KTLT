#include <stdio.h>
#define size 100
void abc(int *a, int n);
void xyz(int *a, int *n);
int count(int *a, int n);
int max(int *a, int n);
int main(){
    int a[size], n;
    xyz(a,&n);  /*Ham nhap so phan tu cho mang va nhap gia tri cho moi phan tu trong mang*/
    abc(a,n);   /*Ham in ra danh sach phan tu cua mang*/
    printf("\nDem = %d",count(a,n));
    printf("\nLon nhat = %d",max(a,n));
}
void abc(int *a, int n){
    printf("\nDanh sach: ");
    for (int i = 0 ; i < n; i++){
        printf("%d\t",*(a+i));
    }
    printf("\n\n");
}
void xyz(int *a, int *n){
    do{
        printf("\nSo phan tu: ");
        scanf("%d",n);
    }while(*n < 1|| *n > size);
    for (int i = 0;i < *n; i++){
        printf("\na[%d] = ", i);
        scanf("%d",a+i);
    }
}
int count(int *a, int n){
    int dem = 0;
    for (int i = 0; i < n; i++){
        if (*(a+i)%3 == 0){
            dem += 1;
        }
    }
    return dem;
}
int max(int *a, int n){
    int max = *a;
    for(int i = 0 ; i < n; i++){
        if (*(a+i) > max){
            max = *(a+i);
        }
    }
    return max;
}
