#include <stdio.h>
int main(){
    int x = 10;
    int *xtro;
    xtro = &x;
    printf("\n1.Dia chi cua bien x: %d",&x);
    printf("\n2.Dia chi cua bien xtro la: %d",&xtro);
    printf("\n3.Noi dung cua bien x: %d",x);
    printf("\n4.Noi dung cua bien con tro: %d",xtro);
    printf("\n5.Gia tri bien xtro tro den: %d",*xtro);
    *xtro = 50;
    printf("\nGia tri cua x: %d",x);
    return 0;
}