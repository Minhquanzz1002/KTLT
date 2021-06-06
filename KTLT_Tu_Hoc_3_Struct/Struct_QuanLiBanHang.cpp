#include <stdio.h>
#include <string.h>
#define MAX 100
typedef struct{
    char ten[50];
    int so_luong;
    int don_gia;
} HANG;
void input_one(HANG &n);
void input_list(HANG P[], int &n);
void tienTra(HANG n);
void output_list(HANG P[], int n);
void searchHang(HANG P[], int n);
void sapXep(HANG P[], int n);
int main(){
    HANG P[MAX];
    int n;
    input_list(P,n);
    output_list(P,n);
    //searchHang(P,n);
    sapXep(P,n);
}
void input_one(HANG &n){
    printf("\nNhap ten hang: ");
    fflush(stdin);
    gets(n.ten);
    printf("Nhap so luong: ");
    scanf("%d",&n.so_luong);
    printf("Nhap don gia: ");
    scanf("%d",&n.don_gia);
}
void input_list(HANG P[], int &n){
    do{
        printf("\nNhap so luong hang (n > 0): ");
        scanf("%d",&n);
    }while(n < 0);
    for (int i = 0 ; i < n; i++){
        printf("\n-------------------------------------------------\n");
        printf("Nhap thong tin cho loai hang thu %d",i+1);
        input_one(P[i]);
    }
}
void tienTra(HANG n){
    if(n.so_luong <= 5){
        printf("%10d",n.so_luong*n.don_gia);
    }
    else if (n.so_luong <= 10){
        printf("%10d",(n.so_luong*n.don_gia)*0.9);
    }
    else{
        printf("%10d",(n.so_luong*n.don_gia)*0.8);
    }
}
void output_list(HANG P[], int n){
    printf("\n%3s %20s %10s %10s %10s","Stt","Ten","So luong","Don gia","Tien tra");
    for (int i = 0 ; i < n ; i++){
        printf("\n%3d %20s %10d %10d",i + 1, P[i].ten,P[i].so_luong,P[i].don_gia);
        tienTra(P[i]);
    }
}
void searchHang(HANG P[], int n){
    char ten_ct[50];
    printf("\nNhap ten hang can tim: ");
    fflush(stdin);
    gets(ten_ct);
    int check = -1;
    for (int i = 0 ; i < n; i++){
        if (strcmp(ten_ct,P[i].ten) == 0){
            check = 0;
        }
    }
    if (check == -1){
        printf("\nKhong tim thay");
    }
    else{
        printf("\n%3s %20s %10s %10s %10s","Stt","Ten","So luong","Don gia","Tien tra");
        int j = 1;
        for (int i = 0 ; i < n; i++){
        if (strcmp(ten_ct,P[i].ten) == 0){
            printf("\n%3d %20s %10d %10d",j, P[i].ten,P[i].so_luong,P[i].don_gia);
            tienTra(P[i]);
            j++;
        }
    }
    }
}
void sapXep(HANG P[], int n){
    HANG temp;
    for (int i = 0 ;i < n - 1; i++){
        for (int j = i + 1; j < n; j++){
            if (strlen(P[i].ten) > strlen(P[j].ten)){
                temp = P[i];
                P[i] = P[j];
                P[j] = temp;
            }
            if (strlen(P[i].ten) == strlen(P[j].ten)){
                if (strcmp(P[i].ten,P[j].ten) > 0){
                    temp = P[i];
                    P[i] = P[j];
                    P[j] = temp;
                }
            } 
        }
    }  
    printf("\nDanh sach sau khi sap xep");
    output_list(P,n);
}

