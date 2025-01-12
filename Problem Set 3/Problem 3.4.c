// Write a program to find the absolute value of a number entered 
// through the keyboard.
#include<stdio.h>
int main(){
    int number;
    scanf("%d",&number);
    int absolute_number = number;
    if(absolute_number < 0){
        absolute_number = -1 * absolute_number;
    }
    printf("Original number is %d\n",number);
    printf("Absolute number is %d\n",absolute_number);
    return 0;
}