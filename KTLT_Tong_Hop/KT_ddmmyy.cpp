/*Kiem tra ngay thang nam nhap vao co dung khong ? Sai thi sai o dau*/
#include <stdio.h>
#include <ctype.h>
void checkYear (int y);
void checkDay (int d, int m, int y);
void checkMonth (int m);
bool leapYear (int y);
int main(){
    int d, m, y;
    printf("Enter day, month, year: ");
    scanf("%d%d%d", &d, &m, &y);
    checkYear(y);
    checkMonth(m);
    checkDay(d,m,y);
}
/*Kiem tra nam*/
void checkYear (int y){
    if (y <= 0){
        printf("\nYear invalid");
    }
    else{
        printf("\nYear valid");
    }
}
/*Kiem tra thang*/
void checkMonth (int m){
    if (m >= 1 && m <= 12){
        printf("\nMonth valid");
    }
    else{
        printf("\nDay and Month invalid");
    }
}
/*Kiem tra nam nhuan*/
bool leapYear (int y){
    if (y % 100 == 0){
        if (y % 400 == 0)
            return 0;
        else
            return 1;
    }
    else if (y % 4 == 0){
        return 0;
    }
    else
        return 1;
}
/*Kiem tra ngay*/
void checkDay (int d, int m, int y){
    switch (m)
    {
    case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        if (d >= 1 && d <= 31){
            printf("\nDay valid");
        }
        else{
            printf("\nDay invalid");
        }
        break;
    case 4: case 6: case 9: case 11:
        if (d >= 1 && d <= 30){
            printf("\nDay valid");
        }
        else{
            printf("\nDay invalid");
        }
    case 2:
        if (leapYear(y) == 0){
            if (d >= 1 && d <=29){
                printf("\nDay valid");
            }
            else{
                printf("\nDay invalid");
            }
        }
        else if (leapYear(y) == 1){
            if (d >= 1 && d <= 28){
                printf("\nDay valid");
            }
            else{
                printf("\nDay invalid");
            }
        }
    default:
        break;
    }
}