#include <stdio.h>
#include <conio.h>
void val (int a);
void var (int &a);
int main(){
    int x, y;
    x = 6;
    y = 9;
    printf("Gia tri ban dau: \nx = %d \ny = %d",x,y);
    val(x);
    var(y);
    printf("\nGia tri sau khi goi ham: \nx = %d \ny = %d",x,y);
}
/*Truyen tham tri*/
void val(int a){
    a = a + 1;
}
/*Truyen tham chieu*/
void var (int &a){
    a = a + 1;
}
