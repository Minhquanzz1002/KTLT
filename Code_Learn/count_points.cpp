#include <stdio.h>
int count_points (int n);
int main(){
    int n;
    printf("Nhap so diem tren 1 canh cua ngu giac: ");
    scanf("%d",&n);
    printf("So diem cua ngu giac la %d",count_points(n));
}
int count_points (int n){
    int count;
    if (n > 1)
        count = 5*(n-1);
    if (n < 1)
        return n;
    return count;
}