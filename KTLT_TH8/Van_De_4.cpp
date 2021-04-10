#include <stdio.h>
#include <conio.h.
#include <iostream>
void nhap (long &x, long &y);
void bp(long &x, long &y);
void lp(long &x, long &y);
void hv(long &x, long &y);
void hienthi(long x, long y);

int main(){
    const max = 5;
    long a =1 , b = 2;
    void (*pfa[max])(long &, long &);
    int key;
    for ( int i = 0 ; i< max ; i++){
        printf("\n(1)Nhap (2)Binhphuong (3)Lapphuong (4)Hoanvi \n");
    scanf("%d",&key);
    switch (key)
    {
        case 1:
            pfa[i] = nhap;
            break;
        case 2:
            pfa[i] = bp;
            break;
        case 3:
            pfa[i] = lp;
            break ;
        case 4:
            pfa[i] = hv;
            break;
        default:
            pfa[i] = 0;
    }
    }
    for ( int i = 0 ; i<max ; i++){
        pfa[i](a,b);
        hienthi(a,b);
    }
    getch();
}
void nhap(long &x, long &y){
    printf("Nhap gia tri moi cua a: ");
    scanf("%ld",&x);
    printf("\nNhap gia tri moi cua b: ");
    scanf("%ld",&y);
}
void hv(long &x, long &y){
    long tam = x;
    x = y;
    y = tam;
}
void lp (long &x, long &y){
    x = x*x*x;
    y = y*y*y;
}
void bp (long &x, long &y){
    x = x*x;
    y = y*y;
}
void hienthi(long x, long y){
    printf("\na = %5ld, b = %5ld\n",x,y);
}
