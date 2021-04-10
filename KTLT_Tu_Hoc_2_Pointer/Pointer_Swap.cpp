/*Hoan doi 2 gia tri*/
#include <stdio.h>
void swap (int *a, int *b);
int main(){
    int a = 65, b = 45;
    printf("a = %d\n",a);
    printf("b = %d\n",b);
    swap(&a,&b);
    printf("Sau khi hoan doi:\n");
    printf("a = %d\n",a);
    printf("b = %d\n",b);
    return 0;
}
void swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}