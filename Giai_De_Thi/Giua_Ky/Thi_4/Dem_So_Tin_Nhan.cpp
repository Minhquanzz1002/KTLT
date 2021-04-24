/*Dung phuong phap de quy tinh so tin nhan sau n giay*/
#include <stdio.h>
int countMess (int tn_bandau, int n);
int main(){
    int tn_bandau;
    int n;
    printf("Nhap so tin nhan ban dau: ");
    scanf("%d",&tn_bandau);
    printf("Nhap so giay: ");
    scanf("%d",&n);
    printf("\nSo tin nhan sau %d giay: %d",n,countMess(tn_bandau,n));
}
/*Dem so tin nhan*/
int countMess (int tn_bandau, int n){
    if (n==0)
        return tn_bandau;
    return countMess (tn_bandau,n-1) + 9000000;
}