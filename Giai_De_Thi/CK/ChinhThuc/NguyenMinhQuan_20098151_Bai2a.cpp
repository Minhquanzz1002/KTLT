#include <stdio.h>
int main(){
    int arr[] = {10 ,20, 30, 40, 50, 60};
    int *ptr1 = arr;    //gia tri cua ptr1 = 10
    int *ptr2 = arr + 5;    //gia tri cua ptr2 = 60
    printf("\nNumber of elements between two pointer are: %d.",(ptr2 - ptr1));    //(ptr2 - ptr1) <=> (arr - arr) + 5 == 5
    printf("\nNumber of bytes between two pointers are: %d",(char*)ptr2 - (char*)ptr1); //ep kieu sang char truoc khi tro toi gia tri => (char*)ptr2 = 6422020
    return 0;                                                                           //(char*)ptr1 = 6422000 ==> (char*)ptr2 - (char*)ptr1 = 20
}
