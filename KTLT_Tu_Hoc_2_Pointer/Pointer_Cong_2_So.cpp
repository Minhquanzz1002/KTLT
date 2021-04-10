/*Cong hai so su dung con tro*/
#include <stdio.h>
int main(){
    int a = 36;
    int b = 65;

    int *p1;
    p1 = &a;
    int *p2;
    p2 = &b;

    int sum = 0;
    sum = *p1 + *p2;
    printf("%d + %d = %d",a,b,sum);
    return 0;
}