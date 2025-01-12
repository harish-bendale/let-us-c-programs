// For the following set of sample data, compute the standard deviation and the mean.
// -6, - 12, 8, 13, 11, 6, 7, 2, -6, -9, -10, 11, 10, 9, 2
// The formula for standard deviation is
// V (x,-x)?
#include<stdio.h>
#include<math.h>
int main(){
    int n;
    printf("Enter the number of elements in an array \n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the array elements\n");
    double average = 0;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        average += arr[i];
    }
    average = (average/n);
    double temp = 0;
    for(int i=0;i<n;i++){   
        temp += sqrt((arr[i]-average)*(arr[i]-average));
    }
    temp = temp/n;
    printf("Ans is %lf\n",temp);
}