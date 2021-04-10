#include <stdio.h>
int main(){
    int a[10], *pa , x;
    a[0] = 11; a[1] = 22; a[2] = 33; a[3] = 44;
    pa = &a[0];
    x = *pa;
    printf("\n0.GT x: %d",x);   //0.GT x: 11;
    pa++;
        x = *pa;
        printf("\n1.GT x: %d",x);   //1.GT x: 22
        x = *pa + 1;
        printf("\n2.GT x: %d",x);   //2.GT x: 23
        x = *(pa+1);
        printf("\n3.GT x: %d",x);   //3.GT x: 33
        x = *++pa;
        printf("\n4.GT x: %d",x);   //4.GT x: 33
        x = ++*pa;
        printf("\n5.GT x: %d",x);   //5.GT x: 34
        x = *pa++;
        printf("\n6.GT x: %d",x);   //6.GT x: 34
    return 0;
}