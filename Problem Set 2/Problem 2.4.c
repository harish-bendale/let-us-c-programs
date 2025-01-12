// If a five-digit number is input through the keyboard, write a 
//program to calculate the sum of its digits. (Hint: Use the modulus operator %)
#include<stdio.h>
int main(){
    int number;
    scanf("%d",&number);
    int sum = 0;
    while(number){
        int digit = number%10;
        sum += digit;
        number = number/10;
    }
    printf("Sum of all the digits of a number is %d",sum);
}