/*Tim tu dai nhat va in ra*/
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
bool khoangTrang (char s)
{
    return s == ' '|| s == '\t' || s == '\n';
}
int main()
{
    char str[100], c[100];
    printf("Enter a string: ");
    fgets(str,sizeof(str),stdin);
    int pos = 0;    /*Vi tri chu dai nhat*/
    int posTemp = 0;    /*Vi tri chu dai nhat tam thoi*/
    int lenMax = 0;    /*Do dai tu dai nhat*/
    int lenTemp = 0 ; /*Do dai tu dai nhat tam thoi*/
    /*Tim tu dai nhat*/
    for (int i = 0 ; i < strlen(str); i++)
    {
        if (!khoangTrang(str[i]))
        {
            posTemp = i - lenTemp;
            lenTemp++;
        }
        else
        {
            if (lenTemp > lenMax)
            {
                lenMax = lenTemp;
                pos = posTemp;
            }
            lenTemp = 0;
        }
    }
    /*In ra tu dai nhat trong chuoi*/
    printf("Tu co do dai dai nhat la: ");
    for (int i = pos; i < pos + lenMax; i++)
    {
        putchar(str[i]);
    }
}