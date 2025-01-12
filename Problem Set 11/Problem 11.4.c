// Implement the Insertion Sort algorithm shown in Figure 13.3 on a 
// set of 25 numbers.
#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of elements in an array \n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the array elements\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        int j = i;
        while(j-1>=0 && arr[j-1] > arr[j]){
            arr[j-1] ^= arr[j];
            arr[j] ^= arr[j-1];
            arr[j-1] ^= arr[j];
            j--;
        }
    }
    printf("Sorted array : \n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}