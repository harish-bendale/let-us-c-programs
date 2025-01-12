// If a five-digit number is input through the keyboard, write a program to 
// reverse the number.
#include<stdio.h>
int main(){
    int number;
    scanf("%d",&number);
    char reverse_number[5];
    int index = 0;
    while(number){
        int digit = number%10;
        reverse_number[index++] = (digit+'0');
        number/=10;
    }
    printf("Reverse Number is %s",reverse_number);
}