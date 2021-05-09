/*Dao nguoc chuoi: in hoa thanh in thuong va nguoc lai*/
#include <stdio.h>
#include <ctype.h>
#include <string.h>
char reverseStringBase(char str[]);
int main(){
    char str[100];
    printf("Enter string: ");
    gets(str);
    reverseStringBase(str);
    puts(str);
}
char reverseStringBase(char str[]){
    for (int i = 0; i < strlen(str); i++){
        if (isupper(str[i]) != 0){
            str[i] = tolower(str[i]);
        }
        else{
            str[i] = toupper(str[i]);
        }
    }
}