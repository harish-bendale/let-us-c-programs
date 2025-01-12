// Write a program to receive an integer and find its octal equivalent. 
// (Hint: To obtain octal equivalent of an integer, divide it continuously 
// by 8 till dividend doesn’t become zero, then write the remainders 
// obtained in reverse direction.)
#include<stdio.h>
int main(){
    long int number;
    printf("Enter the number \n");
    scanf("%ld",&number);
    char ch[50];
    int index = 0;
    while(number){
        int remainder = (int)number%8;
        ch[index++] = (remainder)+'0';
        number /= 8;
    }
    ch[index] = '\0';
    int start = 0 , end = index-1;
    while(start <= end){
        char ch1 = ch[start];
        ch[start]  = ch[end];
        ch[end] = ch1;
        start++; end--;
    }
    printf("Octal equivalent is %s\n",ch);
}