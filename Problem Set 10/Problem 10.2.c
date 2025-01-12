// Write a recursive function to obtain the sum of first 25 natural 
// numbers.
#include<stdio.h>
int sum(int number){
    if(number == 0) return 0;
    return number + sum(number-1);
}
int main(){
    printf("Sum of first 25 natural numbers are : %d\n",sum(25));
    return 0;
}