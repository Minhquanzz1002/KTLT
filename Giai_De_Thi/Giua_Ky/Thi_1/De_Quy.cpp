/*Nhap vao n. dem xem co bao nhieu so ngto trong n*/
/*input 1397983 || output : 3*/
#include <stdio.h>
#include <math.h>
int count (long n);
bool check (int m);
int main(){
    long n;
    printf("Nhap n: ");
    scanf("%d",&n);
    printf("%d",count(n));
}
int count (long n){
    int m;
    if (n==0)
        return 0;
    else{
        m = n%10;
        if (check(m)==1){
            return count(n/10)+1;
        }
    }
    return count(n/10);
}
bool check (int m){
    if (m < 2)
        return 0;
    for (int i = 2; i<= sqrt(m); i++){
        if (m%i == 0)
             return 0;
    }
    return 1;
}