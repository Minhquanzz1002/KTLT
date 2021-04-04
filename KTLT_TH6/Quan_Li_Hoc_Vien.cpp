#include <stdio.h>
#include <string.h>
#define MAX 100
typedef struct{
    char name[30];
    char birthday[8];
    char birthplace[40];
    int P_WIN;
    int P_WORD;
    int P_EXCEL;
    int P_TONG;
    char X_RATE[20];
    char surname[30];
    char fullname[100];
} Trainee;
/*Tong diem*/
void total (Trainee A[], int n){
    for ( int i = 1 ; i <= n ; i++){
        A[i].P_TONG = A[i].P_WIN + A[i].P_EXCEL + A[i].P_WORD ;
    }
}
/*Hoc vien ghi danh*/
void Input (Trainee A[], int n){
    for (int i = 1 ; i <= n ; i++) {
        printf("\n-----------------------------------------\n");
        printf("Enter the detail of %d trainee....",i);
        fflush(stdin);
        printf("\nEnter surname:" );
        gets(A[i].surname);
        fflush(stdin);
        printf("Enter name: ");
        gets(A[i].name);
        fflush(stdin);
        printf("Enter birthday: ");
        gets(A[i].birthday);
        fflush(stdin);
        printf("Enter birthdayplace: ");
        gets(A[i].birthplace);
    }
}
/*In danh sach*/
void DisplayingInformation (Trainee A[], int n){
    printf("STT           \tHO VA TEN       NGAY SINH     NOI SINH\tGHI CHU\n");
    for ( int i = 1 ; i <= n ; i++){
        printf("%-3d %15s %-10s  %-8s      %-20s\n",i,A[i].surname,A[i].name,A[i].birthday,A[i].birthplace);
    }
}
void DisplayingScore (Trainee A[], int n){
    printf("\n%3s%25s%13s%10s\n","STT","HO VA TEN","TONG","XEP LOAI");
    for (int i = 1 ; i <= n ; i++){
        printf("%-3d%20s %-9s%8d\n",i,A[i].surname,A[i].name,A[i].P_TONG);
    }
}
int main(){
    Trainee A[MAX];
    int n;
    printf("How many Trainee: ");
    scanf("%d",&n);
    Input(A,n);
    //DisplayingInformation(A,n);
    printf("\n---------------------------------\n")
    DisplayingScore(A,n);
}