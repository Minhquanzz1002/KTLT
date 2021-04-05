#include <stdio.h>
#include <math.h>
#define MAX 100
typedef struct{
    int x;
    int y;
} PointArray;
void Input (PointArray A[], int n);
void acreage (PointArray A[], int n);
int main(){
    PointArray A[MAX];
    int n;
    printf("How many point: ");
    scanf("%d",&n);
    Input(A,n);
    acreage(A,n);
}
/*Nhap toa do diem*/
void Input(PointArray A[],int n){
    for (int i = 1; i<=n ; i++){
        printf("\nEnter point %d: ",i);
        printf("\nEnter x, y: ");
        scanf("%d%d",&A[i].x,&A[i].y);
    }
}
/*Ham tinh dien tich*/
void acreage (PointArray A[], int n){
    float S;
    for (int i = 1; i < (n -1) ; i++){
        S = S + (0.5*abs((A[i+1].x-A[1].x)*(A[i+2].y-A[1].y)-(A[i+2].x-A[1].x)*(A[i+1].y-A[1].y)));
    }
    printf("Output: %.4f ",S);
}