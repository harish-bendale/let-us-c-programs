// Using conditional operators determine: 
// (1) Whether the character entered through the keyboard is a 
// lower case alphabet or not. 
// (2) Whether a character entered through the keyboard is a special 
// symbol or not.
#include<stdio.h>
int main(){
    char ch;
    printf("Enter the character :\n ");
    scanf("%c",&ch);
    if(ch >= 'a' && ch <= 'z'){
        printf("Lower alphabet character\n ");
    }
    if(!(ch >= 'a' && ch <= 'z') && !(ch >= 'A' && ch <= 'Z')
    && !(ch >= '0' && ch <= '9')){
    printf("Special character\n ");
    }
    return 0;
}