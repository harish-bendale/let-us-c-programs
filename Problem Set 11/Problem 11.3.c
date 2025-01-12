// Write a program using pointers to find the smallest number in an 
// array of 25 integers.
#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of elements in an array \n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the array elements\n");
    for(int i=0;i<n;i++){
        int number;
        scanf("%d",&number);
        arr[i] = number;
    }
    int smallest = *(arr+0);
    for(int i=1;i<n;i++){
        if(smallest > *(arr+i)){
            smallest = *(arr+i);
        }
    }
     printf("Smallest array element is %d\n",smallest);
}