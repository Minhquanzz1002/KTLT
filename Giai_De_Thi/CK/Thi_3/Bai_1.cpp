#include <stdio.h>
#define size 100
int main(){
    int a[size], n;
}
void abc (int *a, int *n){
    do{
        printf("\nSo phan tu: ");
        scanf("%d",n);
    }
    while(*n < 1 || *n > size);
    for (int i = 0 ; i < n ; i++){
        printf("\na[%d] = ", i);
        scanf("%d",a+i);
    }
}
