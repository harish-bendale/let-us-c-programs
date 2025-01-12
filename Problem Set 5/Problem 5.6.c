// Write a program to find the range of a set of numbers entered 
// through the keyboard. Range is the difference between the smallest 
// and biggest number in the list.
#include<stdio.h>
int main(){
    long int number ; 
    printf ("Enter the number \n" ) ; 
    scanf ("%ld",&number );
    long int sum = 0;
    long int original_number = number;
    while(number){
        int digit = (number%10);
        sum += digit*digit*digit;
        number = number/10;
    }
    if(original_number == sum){
        printf ("Given number is an armstrong number\n" );
    }else{
        printf ("Given number is not an armstrong number \n" ) ; 
    }
}