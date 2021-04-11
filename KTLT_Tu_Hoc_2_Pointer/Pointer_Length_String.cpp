/*Tinh do dai chuoi su dung con tro*/
#include <stdio.h>
#define MAX 100
#include <string.h>
int lengthstring(char *p);
int main(){
    char str[MAX] , *p;
    int len;
    printf("Enter string: ");
    gets(str);
    len = lengthstring (str);
    printf("Do dai chuoi: %d",len);
}
/*Tinh do dai chuoi*/
int lengthstring (char *p){
    int count;
    while (*p != '\0'){
        count ++;
        p++;
    }
    return count;
}