/*Dem so tu trong chuoi*/
#include <stdio.h>
#include <string.h>
int demTu (char str[])
{
    int dem = 0;
    /*Dem chu dau tien*/
    if (str[0]!=' ')
    {
        dem ++;
    }
    for (int i = 0; str[i+1] != '\0' ; i++)
    {
        if (str[i]==' ' && str[i+1] !=' ')
        {
            dem++;
        }
    }
    return dem;
}
int main()
{
    char str[100];
    printf("Enter a string: ");
    gets(str);
    printf("So tu trong \"%s\" la %d",str,demTu(str));
}