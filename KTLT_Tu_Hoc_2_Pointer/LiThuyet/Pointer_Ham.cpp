/*
Khai bao con tro ham
*/
#include <stdio.h>
void hoanvi1 (int a, int b);
void hoanvi2 (int *a, int *b);
int main(){
    int a, b;
    a = 10;
    b = 5;
    printf("a = %d\n b = %d",a,b);
    hoanvi1(a,b);
    printf("\nKet qua hoan vi 1: %5d %5d ",a,b);
    hoanvi2(&a,&b);
    printf("\nKet qua hoan vi 1: %5d %5d ",a,b);
}
void hoanvi1 (int a, int b){
    int temp;
    temp = a;
    a = b;
    b = temp;
}
void hoanvi2 (int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
/*XONG*/