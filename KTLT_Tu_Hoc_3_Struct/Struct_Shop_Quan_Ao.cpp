#include <stdio.h>
#include <string.h>
typedef struct{
    char ma_ao[5];
    char kieu_ao[20];
    char loai_ao[5];
    char size[5];
    int sl;
}AO;
void input (AO A[], int &n);
void Displaying (AO A[], int n);
void output (AO P);
void displayingSearch (AO A[], int n);
int main(){
    AO A[100];
    int n;
    input(A,n);
    Displaying(A,n);
    displayingSearch(A,n);
}
/*Nhap thong tin ao*/
void input (AO A[], int &n){
    AO P;
    n = 0;
    while (true){
        printf("\n--------------------------------------\n");
        printf("\nNhap thong tin loai ao %d (ket thuc khi ma ao rong):",n+1);
        printf("\nNhap ma ao: ");
        fflush(stdin);
        gets(P.ma_ao);
        if (P.ma_ao[0] == '\0')
            break;
        printf("Nhap kieu ao: ");
        fflush(stdin);
        gets(P.kieu_ao);
        printf("Nhap loai ao: ");
        fflush(stdin);
        gets(P.loai_ao);
        printf("Nhap size: ");
        fflush(stdin);
        gets(P.size);
        printf("Nhap so luong ao: ");
        scanf("%d",&P.sl);
        A[n] = P;
        n++;
    }
}
/*In 1 dong thong tin*/
void output (AO P){
    printf("\n%10s %20s %10s %10s %10d",P.ma_ao, P.kieu_ao,P.loai_ao,P.size,P.sl);
}
/*Hien thi danh sach*/
void Displaying (AO A[], int n){
    printf("\n%10s %20s %10s %10s %10s","MA AO","KIEU AO","LOAI AO","KICH THUOC","SO LUONG");
    for (int i = 0; i < n; i++){
        output(A[i]);
    }
}
/*In ra so luong ao X co kich thuoc Z*/
void displayingSearch (AO A[], int n){
    char X[20];
    char Z[5];
    printf("\nNhap ten kieu ao can tim: ");
    fflush(stdin);
    gets(X);
    printf("Nhap kich thuoc can tim: ");
    fflush(stdin);
    gets(Z);
    int ketqua = -1;    /*Khong nhat thiet phai la -1. Chi can khac 0 den n la dc*/
    for (int i = 0; i < n ; i++){
        if (strcmp(A[i].kieu_ao,X) == 0 && strcmp(A[i].size,Z) == 0){
            printf("So luong ao \"%s\" size \"%s\": %d",X,Z,A[i].sl);
            ketqua = i;     /*Gan gia tri "i" vao "ketqua" de biet da tim thay*/
        }
    }
    /*Ket thuc dong for bien "ketqua" van la -1 => khong tim thay*/
    if (ketqua == -1 ){
        printf("Het hang roi!!~Con dau ma tim");
    }  
}
