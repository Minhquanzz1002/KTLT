#include <stdio.h>
#include <stdlib.h>
typedef struct{
    float math;
    float physics;
    float chemistry;
} Mark;
void enterMarks (Mark *mark);
void showMarks (Mark mark);
int main(){
    Mark *mark;
    mark = (Mark*)malloc(sizeof(Mark));
    enterMarks(mark);
    showMarks(*mark);
}
void enterMarks (Mark *mark){
    printf("\nEnter math mark: ");
    scanf("%f",&mark->math);
    printf("Enter physics mark: ");
    scanf("%f",&mark->physics);
    printf("Enter chemistry mark: ");
    scanf("%f",&mark->chemistry);
}
void showMarks (Mark mark){
    printf("\n%20s|%20s|%20s","Mark math","Mark physics","Mark chemistry");
    printf("\n%20.2f|%10.2f|%10.2f",mark.math,mark.physics,mark.chemistry);
}