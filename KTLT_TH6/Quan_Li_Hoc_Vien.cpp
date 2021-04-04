/*Quan li hoc vien*/
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define MAX 100
typedef struct{
    char name[30];
    char birthday[15];
    char birthplace[40];
    int P_WIN;
    int P_WORD;
    int P_EXCEL;
    int P_TONG;
    char X_RATE[20];
    char surname[30];
} Trainee;
/*Tong diem*/
void total (Trainee A[], int n){
    for ( int i = 1 ; i <= n ; i++){
        A[i].P_TONG = A[i].P_WIN + A[i].P_EXCEL + A[i].P_WORD ;
    }
}
/*Nhap diem WIN*/
void marksWIN (Trainee A[], int n){
    for (int i = 1 ; i <= n ; i++){
        printf("Enter marks WIN for trainee %d: ",i);
        scanf("%d",&A[i].P_WIN);
    }
}
/*Nhap diem WORD*/
void marksWORD (Trainee A[], int n){
    for (int i = 1 ; i <= n ; i++){
        printf("Enter marks WORD for trainee %d: ",i);
        scanf("%d",&A[i].P_WORD);
    }
}
/*Nhap diem EXCEL*/
void marksEXCEL (Trainee A[], int n){
    for (int i = 1 ; i <= n ; i++){
        printf("Enter marks EXCEL for trainee %d: ",i);
        scanf("%d",&A[i].P_EXCEL);
    }
}
/*Hoc vien ghi danh*/
void Input (Trainee A[], int n){
    for (int i = 1 ; i <= n ; i++) {
        printf("\n-----------------------------------------\n");
        printf("Enter the detail of %d trainee....",i);
        printf("\nEnter surname:" );
        fflush(stdin);
        gets(A[i].surname);
        printf("Enter name: ");
        fflush(stdin);
        gets(A[i].name);
        printf("Enter birthday: ");
        fflush(stdin);
        gets(A[i].birthday);
        printf("Enter birthdayplace: ");
        fflush(stdin);
        gets(A[i].birthplace);
    }
}
/*In danh sach*/
void DisplayingInformation (Trainee A[], int n){
    printf("%3s%25s%20s%20s\n","STT","HO VA TEN","NGAY SINH","NOI SINH");
    for (int i = 1; i <= n ; i++){
        printf("%-3d%20s %-9s%16s%20s\n",i,A[i].surname,A[i].name,A[i].birthday,A[i].birthplace);
    }
}
/*In ket qua cua cac hoc vien*/
void DisplayingScore (Trainee A[], int n){
    total(A,n);
    printf("\n%3s%25s%13s%10s\n","STT","HO VA TEN","TONG","XEP LOAI");
    for (int i = 1 ; i <= n ; i++){
        printf("%-3d%20s %-9s%8d  ",i,A[i].surname,A[i].name,A[i].P_TONG);
        if (A[i].P_TONG >= 24)
            printf("Excellent\n");
        else if (A[i].P_TONG >= 18)
            printf("Good\n");
        else if (A[i].P_TONG >= 15)
            printf("Average\n");
        else
            printf("Poor\n");
    }
}
int main(){
    Trainee A[MAX];
    int n, key;
    printf("How many Trainee: ");
    scanf("%d",&n);
    while (true){
        system("cls");
        printf("***********************************\n");
        printf("*   TRAINEE MANAGEMENT PROGRAM    *\n");
        printf("*    1. Enter information         *\n");
        printf("*    2. Enter marks WIN           *\n");
        printf("*    3. Enter marks WORD          *\n");
        printf("*    4. Enter marks EXCEL         *\n");
        printf("*    5. Displaying information    *\n");
        printf("*    6. Displaying result         *\n");
        printf("*    0. Exit                      *\n");
        printf("***********************************\n");
        printf("*         Enter number            *\n");
        scanf("%d",&key);
        switch (key){
            case 1:
                printf("You chose: Enter information\n");
                Input(A,n);
                printf("\nPress any to continue!!!\n");
                getch();
                break ;
            case 2:
                printf("You chose: Enter marks WIN\n");
                marksWIN(A,n);
                printf("\nPress any to continue!!!\n");
                getch();
                break ;
            case 3:
                printf("You chose: Enter marks WORD\n");
                marksWORD(A,n);
                printf("\nPress any to continue!!!\n");
                getch();
                break ;
            case 4:
                printf("You chose: Enter mark EXCEL\n");
                marksEXCEL(A,n);
                printf("\nPress any to continue!!!\n");
                getch();
                break ;
            case 5:
                printf("You chose: Displaying information\n");
                DisplayingInformation(A,n);
                printf("\nPress any to continue!!!\n");
                getch();
                break ;
            case 6:
                printf("You chose: Displaying result\n");
                DisplayingScore(A,n);
                printf("\nPress any to continue!!\n");
                getch();
                break ;
            case 0:
                printf("You chose: Exit!!!\n");
                getch();
                return 0;
            default:
                printf("Are you an airhead ???\n");
                printf("Press any  to continue!!!\n");
                getch();
                break ;
        }
    }
}