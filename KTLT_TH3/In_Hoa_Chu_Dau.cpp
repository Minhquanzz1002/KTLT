#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main()
{
    /*Nhap chuoi*/
    char str[100];
    printf("Enter a string: ");
    fgets(str,sizeof(str),stdin);
    /*Vong lap xu li mang*/
    for (int i=0 ; i<=strlen(str) ; i++ )
    {
        str[0]=toupper(str[0]);     /*In hoa ki tu dau tien*/
        if (str[i]==' ' && str[i+1])    /*In hoa ki tu sau khoang trang*/
        {
            str[i+1]=toupper(str[i+1]);
        }
    }
    printf("Out String: ");
    for (int i=0 ; i<= strlen(str) ; i++)
    {
        putchar(str[i]);
    }
}