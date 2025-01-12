//Write a program to produce following output
#include<stdio.h>
int main(){
    int row = 4;
    int number = 1;
    int t = 1;
    while(row--){
        for(int i=0;i<row;i++){
            printf(" ");
        }
        int temp = t;
        while(temp--){
            printf("%d ",number);
            number++;
        }
        printf("\n");
        t++;
    }
    return 0;
}