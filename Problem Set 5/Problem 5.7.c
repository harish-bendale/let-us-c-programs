// Write a program to find the range of a set of numbers entered 
// through the keyboard. Range is the difference between the smallest 
// and biggest number in the list.
#include<stdio.h>
int min(int a,int b){
    if(a < b) return a;
    return b;
}
int max(int a,int b){
    if(a > b) return a;
    return b;
}
int main(){
    int n;
    printf("Enter the total numbers you want to enter \n");
    scanf("%d",&n);
    int smallest = 1e9, largest = -1e9;
    for(int i=0;i<n;i++){
        int number;
        printf("Enter the %d number \n",i+1);
        scanf("%d",&number);
        smallest = min(smallest,number);
        largest = max(largest,number);
    }
    printf("The range of the numbers is %d",(largest-smallest));
}