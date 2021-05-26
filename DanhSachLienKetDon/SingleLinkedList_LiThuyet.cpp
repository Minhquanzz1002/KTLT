#include <stdio.h>
#include <stdlib.h>
/*Khai bao LinkedList*/
struct LinkedList{
    int date;
    struct LinkedList *next;
};
typedef struct LinkedList *node;
node createNode (int value){
    node temp;
    temp = (node)malloc(sizeof(struct LinkedList));
    temp->next = NULL;
    temp->date = value;
    return temp;
}
int main(){
    printf("\n==Tao danh sach lien ket==\n");
    
}