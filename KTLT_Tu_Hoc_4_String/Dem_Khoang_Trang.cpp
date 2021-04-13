/*Dem so khoang trang trong nhieu chuoi*/
#include <stdio.h>
#include <string.h>
int main(){
    char str[100][1000];
    int count[100];
    int n;
    do{
        printf("Nhap so chuoi: ");
        scanf("%d",&n);
    }while(n < 1 || n > 100);

    for (int i = 1; i <= n; i++){
        printf("Enter string %d: ",i);
        fflush(stdin);
        gets(str[i]);
        count[i] = 0;
    }
    for (int i = 1; i <= n; i++){
        for (int j = 0; j < (strlen(str[i]) -1); j++){
            if (str[i][j] == ' '){
                count[i] ++;
            }
        }
    }
    for (int i = 1; i <= n; i++){
        printf("\n%d",count[i]);
    }
}