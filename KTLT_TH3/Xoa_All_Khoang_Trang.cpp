/*Xoa tat ca khoang trang trong chuoi*/
#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    printf("Enter a string: ");
    //fgets(str,sizeof(str),stdin);
    gets(str);
    /*Vong lap xoa khoang trang*/
    for (int i = 0 ; i < strlen(str) ; i++)
    {
        if (str[i] == ' ')
        {
            strcpy(&str[i],&str[i+1]);
            i--;
        }
    }
    printf("Out string: \"%s\"",str);
}