#include <stdio.h>
#define MAX 100
typedef struct{
    int x;
    int y;
} Point;
void Input (Point P[], int n);
int acreageRectangle (Point P[]);
int main(){
    Point P[MAX];
    int n;
    printf("How many rectangle: ");
    scanf("%d",&n);
}
/*Nhap vao toa do x, y*/
void Input (Point P[], int n){
    for ( int i = 1; i <= n ; i++){
        printf("Enter point %d: ");
        printf("Enter x, y: ");
        scanf("%d%d",&P[i].x,P[i].y);
    }
}
/*Dien tich hinh chu nhat*/
int acreageRectangle (Point P[]){
    if (P[])
}