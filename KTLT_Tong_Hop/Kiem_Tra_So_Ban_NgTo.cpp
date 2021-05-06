#include <stdio.h>
#include <stdbool.h>
#include <math.h>
bool isPrime (int m);
bool isSemiPrime (int n);
int main(){
    int n;
    printf("Enter N: ");
    scanf("%d",&n);
    if (isSemiPrime(n) == true){
        printf("\nLa so ban ngto");
    }
    if (isSemiPrime(n) == false)
        printf("\nKhong phai so ban ngto");
}
bool isPrime (int m){
    if (m < 2)
        return false;
    for (int i = 2; i < sqrt(m); i++ ){
        if (m%i == 0)
            return false;
    }
    return true;
}
bool isSemiPrime (int n){
    if (n < 4)
        return false;
    for (int i = 2; i <= n/2; i++)
        if (n%i == 0)
            if (isPrime(n/i) == true && isPrime(i) == true)
                return true;
    return false;
}