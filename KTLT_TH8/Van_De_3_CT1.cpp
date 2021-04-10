#include <stdio.h>
int main(){
    int a[] = {10,15,4,25,3,-4};
    for (int i = 0; i <= 5; i++)
        printf("%d\n",*(a+i));
}
// 10
// 15
// 4
// 25
// 3
// -4