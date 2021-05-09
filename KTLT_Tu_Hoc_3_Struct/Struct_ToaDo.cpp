#include <stdio.h>
#include <math.h>
typedef struct{
    float x;
    float y;
} POINTS;
void input (POINTS &A);
void append (POINTS A[], POINTS P, int n);
void _register (POINTS A[], int n);
void checkThangHang (POINTS A[], int x, int y, int z);
int main(){
    POINTS A[10];
    int n = 0;
    _register(A,n);
    int x, y , z;
    do{
        printf("\nNhap cac diem muon kiem tra thang hang: ");
        scanf("%d%d%d",&x,&y,&z);
    }while((x < 0 && x > n ) && (y < 0 && y > n) && (z < 0 && z > n));
    checkThangHang(A,x,y,z);
    return 0;
}
/*Nhap thong tin cho toa do*/
void input (POINTS &A){
    POINTS P;
    printf("Enter x: ");
    scanf("%f",&P.x);
    printf("Enter y:");
    scanf("%f",&P.y);
}
/*Gan thong tin vao mang*/
void append (POINTS A[], POINTS P, int n){
    A[n++] = P;
}
/*Hoi xem co nhap tiep hay khong*/
void _register (POINTS A[], int n){
    POINTS P;
    char Temp;
    do{
        input(P);
        append(A,P,n);
        fflush(stdin);
        printf("Continue ? [Y/n]");
        scanf("%c",&Temp);
    }while(Temp == 'Y' || Temp == 'y');
}
/*Kiem tra xem ba diem co thang hang khong*/
void checkThangHang (POINTS A[], int x, int y, int z){
    float S = 0.5*abs((A[y].x - A[x].x)*(A[z].y - A[x].y)-(A[z].x - A[x].x)*(A[y].y - A[x].y));
    printf("%.4f",S);
    if (S == 0)
        printf("Ba diem thang hang");
    else
        printf("Ba diem khong thang hang");
}
/*Kiem tra 4 diem co tao thanh hinh chu nhat khong*/
void checkHCN (POINTS A[], int n){
    
}
