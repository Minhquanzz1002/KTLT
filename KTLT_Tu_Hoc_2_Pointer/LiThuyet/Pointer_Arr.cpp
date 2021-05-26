/*Khai bao con tro voi mang*/
#include <stdio.h>
int main(){
    int arr[] = {10,9,8,7};
    int *ptr;
    ptr = &arr[0];
    for (int i = 0; i < 4; i++){
        printf("%5d",*(ptr+i));
    }
}
/*XONG*/