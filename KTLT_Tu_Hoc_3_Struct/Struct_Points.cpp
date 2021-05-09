/*Kiem tra 4 diem co tao thanh HCN khong (cach 1 chua ap dung toan)*/
#include <stdio.h>
typedef struct{
    float x;
    float y;
} TOADO;
void input (TOADO arr[], int n);
void output (TOADO arr[], int n);
void checkHCN (TOADO arr[], int n);
int main(){
    TOADO arr[10];
    int n;
    printf("Nhap so diem: ");
    scanf("%d",&n);
    input(arr,n);
    output(arr,n);
    checkHCN(arr,n);
}
/*Nhap x, y*/
void input (TOADO arr[], int n){
    for (int i = 0 ; i < n ; i++){
        printf("\n-----------------------------\n");
        printf("Nhap toa do diem thu %d",i+1);
        printf("\nX%d = ",i+1);
        scanf("%f",&arr[i].x);
        printf("Y%d = ",i+1);
        scanf("%f",&arr[i].y);
    }
}
/*In toa do*/
void output (TOADO arr[], int n){
    for (int i = 0 ; i < n ; i++){
        printf("(%.2f,%.2f);",arr[i].x,arr[i].y);
    }
}
/*Kiem tra HCN*/
void checkHCN (TOADO arr[], int n){
    int dem1 = 0;
    int dem2 = 0;
    if (n < 4 || n > 4){
        printf("\nKhong tao thanh HCN");
    }
    else{
        for (int i = 0 ; i < n ; i ++){
            for (int j = i; j < n ; j++){
                if (arr[i].x != arr[j].x && arr[i].y == arr[j].y){
                    dem1 += 1;
                }
                if (arr[i].x == arr[j].x && arr[i].y != arr[j].y){
                    dem2 += 1;
                }
            }
        }
        if (dem1 == 2 && dem2 == 2){
            printf("\n4 diem tao thanh HCN");
        }
        else{
            printf("\n4 diem khong tao thanh HCN");
        }
    }
}