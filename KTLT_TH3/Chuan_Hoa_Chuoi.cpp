/*Bo toan bo khoang trang dau, cuoi chuoi. Giua 2 chu chi con 1 khoang trang*/
#include <stdio.h>
#include <string.h>
void chuanHoa(char str[])
{
    /*Xoa khoang trang dau chuoi*/
    while (str[0]==' ')
    {
        strcpy(&str[0],&str[1]);    /*Dan tu vi tri 1 toi cuoi vao vi tri 0-n*/
    }
    /*Xoa khoang trang giua 2 chu chi chua 1 khoang trang*/
    for (int i = 0; i < strlen(str) ; i++)
    {
        if (str[i]==' ' && str[i+1] == ' ')
        {
            strcpy(&str[i],&str[i+1]);
            i--;    /*Giam quay lai kiem tra*/
        }
    }
    /*Xoa khoang trang cuoi chuoi*/
    while (str[strlen(str)-1] == ' ')
    {
        strcpy(&str[strlen(str)-1],&str[strlen(str)]);
    }
}
int main()
{
    char str[100];
    printf("Enter a string: ");
    //fgets(str,sizeof(str),stdin);
    gets(str);
    chuanHoa(str);
    printf("Out string: \"%s\"",str);
}