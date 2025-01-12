// Write a program to find the grace marks for a student using switch. 
// The user should enter the class obtained by the student and the
// number of subjects he has failed in. Use the following logic: 
// 
// If the student gets first class and he fails in more than 3 
// subjects, he does not get any grace. Otherwise, he gets a grace
// of 5 marks per subject. 
// 
// If the student gets second class and he fails in more than 2 
// subjects, he does not get any grace. Otherwise, he gets a grace
// of 4 marks per subject. 
// 
// If the student gets third class and he fails in more than 1 
// subject, then he does not get any grace. Otherwise, he gets a 
// grace of 5 marks. 
#include<stdio.h>
int main(){
    int class_obtained, subjects_failed , grace_marks = 0;
    printf("Enter the class obtained by the student \n");
    scanf("%d",&class_obtained);
    printf("Enter the subjects in which student failed\n");
    scanf("%d",&subjects_failed);
    switch(class_obtained){
        case 1 : 
            if(subjects_failed <= 3){
                grace_marks = subjects_failed * 5;
            }
            break;
        case 2 :
            if(subjects_failed <= 2){
                grace_marks = subjects_failed * 4;
            }
            break;
        case 3 :
            if(subjects_failed <= 1){
                grace_marks = subjects_failed * 5;
            }
            break;
        default: 
            printf("Invalid class entered.\n");
            break;
    }
    if(grace_marks > 0){
         printf("The student is eligible for %d grace marks.\n", grace_marks);
    }else{
         printf("The student is eligible for %d grace marks.\n", grace_marks);
    }
    return 0;
}