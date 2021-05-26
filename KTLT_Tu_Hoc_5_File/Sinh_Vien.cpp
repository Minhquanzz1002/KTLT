#include <stdio.h>
#include <string.h>
#include <conio.h>
typedef struct{
    char ma_sv[10];
    char ten[40];
} SinhVien;
void WriteFile (char *FileName);
void ReadFile (char *FileName);
void Search (char *FileName);
int main(){
    //WriteFile("D:\\D\\Document\\KTLT_KH2_2021\\File_Code\\DULIEU.dat");
    ReadFile("D:\\D\\Document\\KTLT_KH2_2021\\File_Code\\DULIEU.dat");
    Search("D:\\D\\Document\\KTLT_KH2_2021\\File_Code\\DULIEU.dat");
}
/*Ghi noi dung vao file*/
void WriteFile (char *FileName){
    FILE *fp;
    int n, i;
    SinhVien sv;
    fp = fopen(FileName,"wb");
    printf("\nNhap vao so luong sv: ");
    scanf("%d",&n);
    for(i = 1;i<=n;i++)  
	{  
		printf("Sinh vien thu %i\n",i);   	 	
		fflush(stdin); 
		printf(" - MSSV: ");
		gets(sv.ma_sv);    
		printf(" - Ho ten: ");
		gets(sv.ten);    
		fwrite(&sv,sizeof(sv),1,fp);  
	}  
	fclose(fp);

}
/*Doc file */
void ReadFile (char *FileName){
    FILE *fp;
    SinhVien sv;
    fp = fopen(FileName,"rb");
    printf(" MSSV | Ho va ten\n");
    fread(&sv,sizeof(sv),1,fp);
    while (!feof(fp))  
	{  
		printf(" %s | %s\n",sv.ma_sv,sv.ten);  
		fread(&sv,sizeof(sv),1,fp);  
	}
	fclose(fp);
}
/*Tim kiem trong file*/
void Search (char *FileName){
    char MSSV[10];
    SinhVien sv;
    FILE *fp;
    int found = 0;
    printf("\nNhap MSSV can tim: ");
    fflush(stdin);
    gets(MSSV);
    fp = fopen(FileName,"rb");
    while(!feof(fp) && found == 0){
        fread(&sv,sizeof(sv),1,fp);
        if (strcmp(sv.ma_sv,MSSV) == 0){
            found = 1;
        }
    }
    fclose(fp);
    if (found == 1){
		printf("Tim thay SV co ma %s. Ho ten la: %s",sv.ma_sv,sv.ten);  
	}  	
	else{  
		printf("Tim khong thay sinh vien co ma %s",MSSV);  
	}
     
}