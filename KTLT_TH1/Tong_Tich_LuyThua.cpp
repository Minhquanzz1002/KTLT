#include <stdio.h>
int S (int n);
int P (int n);
int A (float a,int n);
int main(){
    int n;
    printf("Nhap n: ");
    scanf("%d",&n);
    float a;
    printf("Nhap a: ");
    scanf("%f",&a);
    //printf("\nTong tu 1 den %d la %d",n,S(n));
    //printf("\nTich tu 1 den %d la %d",n,P(n));
    printf("\n%f mu %d la %d",a,n,A(a,n));
}
int S (int n){
    if (n==0)
        return 0;
    return S(n-1)+n;
}
int P (int n){
    if (n == 1)
        return 1;
    return P(n-1)*n;
}
int A (float a,int n){
    if (n==0)
        return 1;
    if (n==1)
        return a;
    return A(a,n-1)*a;
}