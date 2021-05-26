#include <stdio.h>
#define MAX 100
#include <time.h>
#include <stdlib.h>
#include <conio.h>
#include <stdbool.h>
void input (int *p, int &n);

void output (int *p, int n);

int sumArray(int *p, int n);

void sortUp(int *p, int n);

void addElement(int *p, int &n);

void findElement(int *p, int n);

void delElement(int *p, int &n);

void addElementInPos(int *p, int &n);

void checkArr(int *p, int &n);

void countElement(int *p, int n);

void checkTangGiam(int *p, int n);

void ghepHaiMang(int *p, int &n, int *q, int m);

int main(){
    int a[MAX], n = 0;
    int *p = &a[0];
    int b[MAX], m;
    int *q = &b[0];
    int key;
    bool check = false;
    while(check == false){
        system("cls");
        printf("\n1.Nhap mang\n2.Xuat mang\n3.Tong mang\n4.Sap xep tang\n5.Them vao cuoi mang\n6.Tim phan tu trong mang");
        printf("\n7.Xoa phan tu\n8.Them vao vi tri nhap tu ban phim\n9.Dem so lan xuat hien gia tri\n10.Kiem tra mang tang hay giam");
        printf("\n11.Nhap mang 2\n12.Ghep 2 mang\n13.In mang 2");
        printf("\n0.Thoat\n");
        scanf("%d",&key);
        switch(key){
            case 1:
                input(p,n);
                printf("\nPress any to continue!!!");
                getch();
                break;
            case 2:
                checkArr(p,n);
                output(p,n);
                printf("\nPress any to continue!!!");
                getch();
                break;
            case 3:
                checkArr(p,n);
                sumArray(p,n);
                output(p,n);
                printf("\nPress any to continue!!!");
                getch();
                break;
            case 4:
                checkArr(p,n);
                sortUp(p,n);
                output(p,n);
                printf("\nPress any to continue!!!");
                getch();
                break;
            case 5:
                checkArr(p,n);
                addElement(p,n);
                output(p,n);
                printf("\nPress any to continue!!!");
                getch();
                break;
            case 6:
                checkArr(p,n);
                findElement(p,n);
                output(p,n);
                printf("\nPress any to continue!!!");
                getch();
                break;
            case 7:
                checkArr(p,n);
                delElement(p,n);
                output(p,n);
                printf("\nPress any to continue!!!");
                getch();
                break;
            case 8:
                checkArr(p,n);
                addElementInPos(p,n);
                output(p,n);
                printf("\nPress any to continue!!!");
                getch();
                break;
            case 9:
                checkArr(p,n);
                countElement(p,n);
                output(p,n);
                printf("\nPress any to continue!!!");
                getch();
                break;
            case 10:
                checkArr(p,n);
                checkTangGiam(p,n);
                output(p,n);
                printf("\nPress any to continue!!!");
                getch();
                break;
            case 11:
                input(q,m);
                printf("\nPress any to continue!!!");
                getch();
                break;
            case 12:
                checkArr(p,n);
                checkArr(q,m);
                ghepHaiMang(p,n,q,m);
                printf("\nPress any to continue!!!");
                getch();
                break;
            case 13:
                checkArr(q,m);
                output(q,m);
                printf("\nPress any to continue!!!");
                getch();
                break;
            case 0:
                check = true;
                return 0;
            default:
                getch();
                break;
        }
    }
}
/*Nhap mang*/
void input(int *p, int &n){
    printf("\nNhap so phan tu cua mang: ");
    scanf("%d",&n);
    for (int i = 0 ; i< n; i++){
        *p = 1 + rand()%100;
        p++;
    }
}
/*Xuat mang*/
void output(int *p, int n){
    printf("\nArr:");
    for (int i = 0 ; i< n; i++){
        printf("%5d",*p);
        p++;
    }
}
/*Kiem tra da nhap mang chua*/
void checkArr(int *p, int &n){
    if (n == 0){
        printf("\nMang chua ton tai");
        input(p,n);
    }
}
/*Tong mang*/
int sumArray (int *p, int n){
    int sum = 0;
    for (int i = 0 ; i< n; i++){
        sum += *p;
        p++;
    }
    return sum;
}
/*Sap xep tang dan*/
void sortUp (int *p, int n){
    int temp;
    for ( int i = 0; i < n -1 ;i++ ){
        for (int j = i + 1; j < n; j++){
            if (*(p+i) > *(p+j)){
                temp = *(p+i);
                *(p+i) = *(p+j);
                *(p+j) = temp;
            }
        }
    }
}
/*Them vao cuoi mang*/
void addElement(int *p, int &n){
    int giaTriThem;
    printf("\nNhap gia tri muon them: ");
    scanf("%d",&giaTriThem);
    *(p+n) = giaTriThem;
    n++;
}
/*Tim phan tu trong mang*/
void findElement(int *p, int n){
    int giaTriTim;
    int vt = -1;
    printf("\nNhap gia tri can tim: ");
    scanf("%d",&giaTriTim);
    for (size_t i = 0; i < n; i++){
        if (*(p+i) == giaTriTim){
            vt = i;
        }
    }
    if (vt == -1){
        printf("Co dau ma tim");
    }
    else{
        printf("Tim thay so %d o vi tri %d",giaTriTim,vt);
    }
}
/*Xoa phan tu*/
void delElement(int *p, int &n){
    int vtXoa;
    int count = -1;
    printf("\nNhap vi tri can xoa: ");
    scanf("%d",&vtXoa);
    for (int i = vtXoa; i < n; i++){
        *(p+i) = *(p+i+1);
    }
    n--;
}
/*Them gia tri moi vao vi tri nhap tu ban phim*/
void addElementInPos(int *p, int &n){
    int vtThem, giaTriThem;
    printf("\nNhap vao gia tri can them: ");
    scanf("%d",&giaTriThem);
    printf("Nhap vao vi tri can them: ");
    scanf("%d",&vtThem);
    for (int i = n; i >= vtThem; i--){
        if (i == vtThem){
            *(p+vtThem) = giaTriThem;
        }
        else{
            *(p+i) = *(p+i-1);
        }
    }
    n++;
}
/*Dem so lan xuat hien cua 1 gia tri*/
void countElement(int *p, int n){
    int count = 0;
    int giaTriDem;
    printf("\nNhap gia tri can den: ");
    scanf("%d",&giaTriDem);
    for (int i = 0 ; i < n ; i++){
        if(*(p+i) == giaTriDem){
            count++;
        }
    }
    printf("Co %d so %d trong mang",count,giaTriDem);
}
/*Kiem tra mang co gia tri tang dan khong*/
void checkTangGiam(int *p, int n){
    int countTang = 0;
    int countGiam = 0;
    for (int i = 0; i < n - 1 ; i++){
        if(*(p+i) < *(p+i+1)){
            countTang += 1;
        }
        if(*(p+i) > *(p+i+1)){
            countGiam += 1;
        }
    }
    if (countTang == n-1){
        printf("\nMang tang dan");
    }
    if (countGiam == n-1){
        printf("\nMang giam dan");
    }
    if (countGiam != n-1 && countTang != n-1){
        printf("\nMang khong tang khong giam");
    }
}
/*Ham ghep 2 mang thanh 1 mang*/
void ghepHaiMang(int *p, int &n, int *q, int m){
    for(int i = n,j = 0; i < m + n; i++, j++){
        *(p+i) = *(q+j);
    }
    n = m + n;
    printf("\nGhep 2 mang thanh cong");
}
/*XONG*/
