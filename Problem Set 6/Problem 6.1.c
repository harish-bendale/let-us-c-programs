// Write a program to print the multiplication table of the number
// entered by the user. The table should get displayed in the following 
// form: 
// 29 * 1 = 29 
// 29 * 2 = 58
#include<stdio.h>
int main(){
    int number;
    printf("Enter the number \n");
    scanf("%d",&number);
    for(int i=0;i<=9;i++){
        printf("%d * %d = %d\n",number,i+1,number*(i+1));
    }
    return 0;
}