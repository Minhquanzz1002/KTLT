#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void input(int *p, int n);
void output(int *p, int n);
void inNguoc (int *p, int n);
int main(){
    int n, *p;
    printf("\nNhap so phan tu cua mang: ");
    scanf("%d",&n);
    p = (int*) malloc(n * sizeof(int));
    srand(time(0));
    input(p,n);
    output(p,n);
    inNguoc(p,n);
}
void input(int *p, int n){
    for (int i = 0 ; i< n; i++){
        *p = 1 + rand()%100;
        p++;
    }
}
void output(int *p, int n){
    printf("\nArr:");
    for (int i = 0 ; i< n; i++){
        printf("%5d",*p);
        p++;
    }
}
void inNguoc (int *p, int n){
    printf("\nMang in theo chieu nguoc lai: ");
    for (int i = n - 1 ; i >= 0; i--){
        printf("%5d",*(p+i));
    }
}
