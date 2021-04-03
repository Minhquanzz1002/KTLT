#include <stdio.h>
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
    }/*
    for (int i = 1; i <= n ; i++){
        printf("avg sinh vien %d: %.2f",i,SV[i].DTB);
    }*/
}
/*In ra SV co diem TB <4*/
void dsHocLai (Student SV[], int n){
    int stt = 1;
    printf("------------------Danh sach hoc lai------------------\n");
    printf("STT HO TEN\tMA SINH VIEN\t  DIEM TB\n");
    for (int i = 1; i <= n; i++){
        if (SV[i].DTB < 4){
            printf("%-3d %5s %14d %17f\n",n,SV[i].name,SV[i].ID,SV[i].DTB);
            stt++;
        }
    }
}
int main(){
    Student SV[MAX];
    int n;
    printf("Enter the student number: ");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++){
        printf("Enter information for student \"%d\": ",i);
        printf("\nEnter the name: ");
        scanf("%s",&SV[i].name);
        printf("Enter ID: ");
        scanf("%d",&SV[i].ID);
        printf("Enter the point of TK, GK, CK, TH: ");
        scanf("%d%d%d%d",&SV[i].TK,&SV[i].GK,&SV[i].CK,&SV[i].TH);
    }
    avg(SV,n);
    dsHocLai(SV,n);
}