// A five-digit number is entered through the keyboard. Write a 
// program to obtain the reversed number and to determine whether 
// the original and reversed numbers are equal or not.
#include <stdio.h>

int main() {
    int number;
    scanf("%d", &number);
    int original_number = number;
    int reverse_number = 0;
    while(number > 0){
        int digit = (number%10);
        reverse_number = reverse_number*10 + digit;
        number = number/10;
    }
    printf("Original number %d\n",original_number);
    printf("Reverse number %d\n",reverse_number);
    if(original_number == reverse_number){
        printf("Original and reverse number both are same\n");
    }else{
        printf("Original and reverse number both are different\n");
    }
    return 0;
}
