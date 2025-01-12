// If an array arr contains n elements, then write a program to check if 
// arr[ 0 ] = arr[ n - 1 ], arr[ 1 ] = arr[ n - 2 ] and so on.
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
    for(int i=0;i<(n/2);i++){
        if(arr[i] == arr[n-i-1]){
            printf("Array elements at pos %d and %d are equal\n",i+1,n-i);
        }
    }
}