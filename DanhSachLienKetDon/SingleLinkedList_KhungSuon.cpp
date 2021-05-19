#include <stdio.h>
#include <stdlib.h>
struct SoNguyen{
    int dulieu;
    struct SoNguyen *next;
};
void inDS(SoNguyen *&pdau);

void taoDS (SoNguyen *&pdau);
int main(){
    SoNguyen *pdau = NULL;
    taoDS(pdau);
    inDS(pdau);
    return 0;
}
void taoDS (SoNguyen *&pdau){
    int repeat;
    SoNguyen *p = pdau;
    do{
        if (pdau == NULL){
            pdau = (SoNguyen*)malloc(sizeof(SoNguyen));
            p = pdau;
        }
        else{
            p = pdau;
            while(p->next != NULL) p = p->next;
            p->next = (SoNguyen*)malloc(sizeof(SoNguyen));
            p = p->next;
        }
        printf("\nNhap du lieu cho danh sach: ");
        scanf("%d",&(p->dulieu));
        p->next = NULL;
        printf("\nTiep tuc (1)\nThoat (0)");
        scanf("%d",&repeat);
    } while (repeat != 0);   
}
void inDS (SoNguyen *&pdau){
    SoNguyen *p = pdau;
    if (pdau == NULL){
        return ;
    }
    else{
        while(p != NULL){
            printf("%5d", p->dulieu);
            p = p->next;
        }
    }
}