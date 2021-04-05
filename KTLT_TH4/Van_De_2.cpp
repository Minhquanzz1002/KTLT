#include <stdio.h>
#define MAX 100
#include <math.h>
typedef struct{
    int x;
    int y;
} point;
/*Tinh do dai P1P2*/
float lengthP1P2 (point p[]){
    float result;
    result = sqrt(pow((p[1].x-p[2].x),2)+pow((p[1].y-p[2].y),2));
    return result;
}
/*Tinh dien tich tam giac*/
void areaTriangle (point p[]){
    float result;
    result = 0.5*abs((p[2].x-p[1].x)*(p[3].y-p[1].y)-(p[3].x-p[1].x)*(p[2].y-p[1].y));
    if (result != 0)
        printf("\nArea triangle P1P2P3: %.4f",result);
    else
        printf("\nBa diem thang hang!!!Don't be such an ass!!!");
}

int main(){
    point p[MAX];
    int n;
    printf("Nhap so dinh tam giac: ");
    scanf("%d",&n);
    for (int i = 1; i <= n ; i++){
        printf("Nhap du lieu cho dinh %d:",i);
        printf("\nNhap toa do x, y: ");
        scanf("%d%d",&p[i].x,&p[i].y);
    }
    printf("length point P1P2: %.4f",lengthP1P2(p));
    areaTriangle(p);
}
