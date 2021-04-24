/*Dem so lan xuat hien cua ki tu a trong chuoi*/
#include <stdio.h>
#include <string.h>
void input (char a[], int n);
void output (char a[], int n);
int count (char a[], int n);
int main(){
    int n;
    char a[10];
    printf("Nhap so luong PT mang: ");
    scanf("%d",&n);
    input(a,n);
    output(a,n);
    printf("\nSo PT \"a\" trong mang la %d",count(a,n));
}
/*Nhap mang*/
void input(char a[], int n){
    for (int i = 0 ; i< n; i++){
        printf("Nhap ki tu %d: ",i+1);
        fflush(stdin);
        scanf("%c",&a[i]);
    }
}
/*Xuat mang*/
void output(char a[], int n){
    for (int i = 0 ; i< n; i++){
        printf("\"%2c\",",a[i]);
    }
}
/*Dem so chu cai a trong mang*/
int count (char a[], int n){
    if (n == -1)
        return 0;
    else{
        if (a[n] == 'a'){
            return count(a,n-1) +1;
        }
    }
    return count(a,n-1);
}
