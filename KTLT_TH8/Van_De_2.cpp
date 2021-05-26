#include <stdio.h>
#include <stdbool.h>
#include <string.h>
void ReadFile (char *FileName);
void WriteFile (char *FileName);
typedef struct{
    char fullname[40];
    int age;
    int salary;
} Staff;
void WriteFile (char *FileName);
int main(){
    //WriteFile("D:\\D\\Document\\KTLT_KH2_2021\\File_Code\\THONGTINNV.dat");
    ReadFile("D:\\D\\Document\\KTLT_KH2_2021\\File_Code\\THONGTINNV.dat");
}
void WriteFile (char *FileName){
    FILE *fp;
    Staff nv;
    int i;
    fp = fopen(FileName,"wb");
    if (fp == NULL){
        printf("\nCannot open file");
    }
    else{
        for (i = 1; ;i++){
            printf("\nEnter information for staff %d",i);
            printf("\nEnter full name: ");
            fflush(stdin);
            gets(nv.fullname);
            if (strlen(nv.fullname) == 0){
                break;
            }
            printf("Enter age: ");
            scanf("%d",&nv.age);
            printf("Enter salary: ");
            scanf("%d",&nv.salary);
            fwrite(&nv,sizeof(nv),1,fp);
        }
    }
    fclose(fp);
    printf("\nSave thanh cong");
}
void ReadFile (char *FileName){
    Staff nv;
    FILE *fp;
    fp = fopen(FileName,"rb");
    if (fp == NULL){
        printf("\nCannot open file");
    }
    fread(&nv,sizeof(nv),1,fp);
    printf("\n%-40s%10s%10s","HO TEN","TUOI","LUONG");
    while(!(feof(fp))){
        printf("\n%-40s%10d%10d",nv.fullname,nv.age,nv.salary);
        fread(&nv,sizeof(nv),1,fp);
    }
    fclose(fp);
}