#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define MAX 100
typedef struct{
    char name[MAX];
    int ID;     /*ma SV*/
    int TK;     /*Thuong ki*/
    int GK;     /*Giua ki*/
    int CK;     /*Cuoi ki*/
    int TH;     /*Thuc hanh*/
    float DTB = 0;    /*Diem trung binh*/ 
} Student;
/*Tinh diem trung binh*/
void avg(Student SV[], int n){
    for (int i = 1; i <= n ; i++){
        SV[i].DTB = (((2.0*SV[i].TK+3*SV[i].GK+5*SV[i].CK)/10)*2+SV[i].TH)/3;
    }
}
/*In ra SV co diem TB <4*/
void re_study (Student SV[], int n){
    int stt = 1;
    printf("------------------Danh sach hoc lai------------------\n");
    printf("%3s  %-20s%-20s%-10s\n","STT","HO TEN","MA SINH VIEN","DIEM TB");
    for (int i = 1; i <= n; i++){
        if (SV[i].DTB < 4){
            printf("%-3d  %-20s%-20d%-10f\n",stt,SV[i].name,SV[i].ID,SV[i].DTB);
            stt++;
        }
    }
}
/*Tim sinh vien*/
void findstudent (Student SV[], int n){
    int findID;
    printf("Enter ID student (need to find): ");
    scanf("%d",&findID);
    for (int i = 1; i <= n; i++){
        if (findID == SV[i].ID){
            printf("full name: %s\n",SV[i].name);
            printf("Student ID: %d\n",SV[i].ID);
            printf("Score TK: %d\n",SV[i].TK);
            printf("Score GK: %d\n",SV[i].GK);
            printf("Score CK: %d\n",SV[i].CK);
            printf("Score TH: %d\n",SV[i].TH);
            printf("Score average: %f\n",SV[i].DTB);
        }
    }
}
/*Hien thi ket qua thi*/
void displayresult (Student SV[], int n){
    printf("%3s  %-20s%-10s%-5s%-5s%-5s%-5s%-10s%-10s\n","STT","HO TEN","MA SV","TK","GK","CK","TH","DTB","GHI CHU");
    for (int i = 1; i <= n; i++){
        printf("%-3d  %-20s%-10d%-5d%-5d%-5d%-5d%-10f",i,SV[i].name,SV[i].ID,SV[i].TK,SV[i].GK,SV[i].CK,SV[i].TH,SV[i].DTB);
        if (SV[i].DTB < 4)
            printf("Hoc lai\n");
        else
            printf("\n");
    }
}
/*Nhap thong tin sinh vien*/
void Input (Student SV[], int n){
    for (int i = 1; i <= n; i++){
        printf("Enter information for student \"%d\": ",i);
        printf("\nEnter name: ");
        fflush(stdin);
        gets(SV[i].name);
        printf("Enter ID: ");
        scanf("%d",&SV[i].ID);
        printf("Enter the point of TK, GK, CK, TH: ");
        scanf("%d%d%d%d",&SV[i].TK,&SV[i].GK,&SV[i].CK,&SV[i].TH);
    }
}
/*Sap xep DTB giam dan*/
void sortUp (Student SV[], int n){
    for ( int i= 1; i < n ; i++){
        for ( int j = i +1 ; j <= n ; j++){
            if (SV[i].DTB < SV[j].DTB){
                Student temp = SV[j];
                SV[j] = SV[i];
                SV[i] = temp;
            }
        }
    }
}
int main(){
    Student SV[MAX];
    int n;
    printf("How many student: ");
    scanf("%d",&n);
    Input(SV,n);
    avg(SV,n);
    re_study(SV,n);
    findstudent(SV,n);
    sortUp(SV,n);
    displayresult(SV,n);
    return 0;
}