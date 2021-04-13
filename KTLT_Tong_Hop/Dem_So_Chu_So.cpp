#include <stdio.h>
int main(){
    int n, dem;
    do
    {
        printf("Nhap N: ");
        scanf("%d",&n);
    } while (n <= 0);
    while (n != 0)
    {
        n = n/10;
        dem ++;
    }
    printf("%d",dem);
    return 0;
}