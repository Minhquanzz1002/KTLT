#include <stdio.h>
#include <stdbool.h>
typedef struct{
    int dd;
    int mm;
    int yy;
} DATE;
void input (DATE date);
void checkYear (DATE date);
bool checkYear2 (DATE date);
bool checkDay_Month (DATE date);
int main(){
    DATE date;
    input(date);
    checkYear(date);/*
    if (checkYear2(date) == true)
        printf("\nNam nhuan");
    else 
        printf("\nNam khong nhuan");*/
    
}
/*Nhap ngay thang nam*/
void input (DATE date){
    while (checkDay_Month(date) == false)
    {
        printf("Enter day: ");
        scanf("%d",&date.dd);
        printf("Enter month: ");
        scanf("%d",&date.mm);
        printf("Enter year: ");
        scanf("%d",&date.yy);
    }
}
/*Kiem tra nam nhuan khong*/
void checkYear (DATE date){
    if (date.yy%400 == 0 || (date.yy%4 == 0 && date.yy%100 != 0))
        printf("\nNam nhuan");
    else
        printf("\nNam khong nhuan");
}
/*Kiem tra nam nhuan cach 2*/
bool checkYear2 (DATE date){
    return ((date.yy%400 == 0) || ((date.yy%4 == 0) && (date.yy%100 != 0)));
}
/*Kiem tra ngay thang nhap vao hop le khong*/
bool checkDay_Month (DATE date){
    if (date.mm > 0 && date.mm <=12){
        if (date.mm == 1||date.mm == 3|| date.mm == 5 || date.mm == 7 || date.mm == 8 || date.mm == 10 || date.mm == 12){
            if (date.dd > 0 && date.dd <= 31){
                return true;
            }
            else
                return false;
        }
        else if (date.mm == 4||date.mm == 6|| date.mm == 9 || date.mm == 11){
            if (date.dd > 0 && date.dd <= 30){
                return true;
            }
            else 
                return false;
        }
        else if (date.mm == 2){
            if (date.yy%400 == 0 || (date.yy%4 == 0 && date.yy%100 != 0)){
                if (date.dd > 0 && date.dd <= 29){
                    return true;
                }
                else 
                    return false;
            }
        }
    }
    return false;
}