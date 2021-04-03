#include <stdio.h>
#include <string.h>
/*Trich ra n ki tu dau tien*/
void trich_N_Ki_Tu_Dau (char str[])
{
    int n;
    printf("Nhap so ki tu dau muon trich: ");
    scanf("%d",&n);
    printf("%d ki tu dau tien cua chuoi \"%s\" la:\"",n,str);
    for (int i = 0; i < n ; i++)
    {
        putchar(str[i]);
    }
    printf("\"");
}
/*Trich n ki tu cuoi cung*/
void trich_N_Ki_Tu_Cuoi (char str[])
{
    int n;
    printf("Nhap so ki tu cuoi muon trich: ");
    scanf("%d",&n);
    printf("%d ki tu cuoi cua chuoi \"%s\" la:\"",n,str);
    for (int i = (strlen(str)-n); i < strlen(str) ; i++)
    {
        putchar(str[i]);
    }
    printf("\"");
}
/*Trich n ki tu bat dau tu vi tri pos*/
void trich_N_KT_Tu_Pos (char str[])
{
    int n, pos;
    printf("Nhap so ki tu muon trich: ");
    scanf("%d",&n);
    do
    {
        printf("Nhap vi tri bat dau trich: ");
        scanf("%d",&pos);
    } while (pos > strlen(str));
    
    printf("%d ki bat dau tu %d cua %s la:\"",n,pos,str);
    for (int i = pos; i<(pos + n) && i<strlen(str); i++)
    {
        putchar(str[i]);
    }
    printf("\"");
}
int main()
{
    char str[100];
    printf("Enter a string: ");
    gets(str);
    // trich_N_Ki_Tu_Dau(str);
    //trich_N_Ki_Tu_Cuoi(str);
    trich_N_KT_Tu_Pos(str);
}