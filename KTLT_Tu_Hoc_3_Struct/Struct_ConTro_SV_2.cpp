#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct sinhVien{
    char hten[30];
    int tuoi;
    float diemTB;
    struct sinhVien *link;
}p_sv;

p_sv *first, *last, *p;

void taoDS(){
    char ht[30],tl;
    int i=0,tuoi;
    float dtb;
    first = NULL;
    do{
        
        printf("\n\tPHIEU NHAP THONG TIN SINH VIEN.\n\n");
        printf("Sinh vien %d:\n",i+1);
        printf(" Ho ten: ");
        fflush(stdin);
        gets(ht);
        printf(" Tuoi: ");
        scanf("%d",&tuoi);
        printf(" Diem TB: ");
        scanf("%f",&dtb);
        fflush(stdin);
        p = (p_sv *)malloc(sizeof(p_sv));
        strcpy(p->hten,ht);
        p->diemTB = dtb; 	p->tuoi = tuoi;
        if(first == NULL){
            first = p;
            last = p;
        }else{
            last->link = p;
            last = p;
        }
        p->link = NULL;
        i++;
        printf("\n Tiep tuc(Y)\n Thoat(N\n");
        fflush(stdin);
        printf(" Dap an cua ban: ");
        tl = getchar();
    }while(tl != 'n');
}

void xuat(){
    int i=0;
    
    printf("\n\tDANH SACH SINH VIEN\n\n");
    printf("STT Ho ten\tTuoi\tDiem TB\n");
    p = first;
    while(p != NULL){
        printf("%2d  %s\t%d\t%.2f\n",++i,p->hten,p->tuoi,p->diemTB);
        p = p->link;
    }
    
}
 
int main(){
    char tl;
    do{
        fflush(stdin);
        printf("\n\tDANH SACH SINH VIEN");
        printf("\n\n\tMENU:\n");
        printf("\n Phim 1. Nhap danh sach.");
        printf("\n Phim 2. In danh sach.");
        printf("\n Phim 3. Them sinh vien(Them sau)");
        printf("\n Phim 4. Thoat.");
        printf("\n\n Ban chon: ");
        tl = getchar();
        fflush(stdin);
        switch(tl){
            case '1': taoDS();	 	break;
            case '2': xuat();		break;
            //case '3': themSau(); 	break;
            case '4': printf("Cam on da su dung chuong trinh. Goodbye\n");break;
            default : printf("Phim ban chon khong dung. Vui long thu lai.\n");
                
                break;
        }
    }while(tl!='4');
}