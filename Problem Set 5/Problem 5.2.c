// Write a program to print out all Armstrong numbers between 1 and 
// 500. If sum of cubes of each digit of the number is equal to the 
// number itself, then the number is called an Armstrong number. For 
// example, 153 = ( 1 * 1 * 1 ) + ( 5 * 5 * 5 ) + ( 3 * 3 * 3 ).
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