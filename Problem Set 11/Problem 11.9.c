// The X and Y coordinates of 10 different points are entered through the keyboard. Write a program to find the distance of last point from the first point (sum of distances between consecutive points).
#include<stdio.h>
#include<math.h>
int main(){
    int n;
    printf("Enter the number of elements in an array \n");
    scanf("%d",&n);
    double sum = 0.0;
    double x1,x2,y1,y2;
    printf("Enter co-ordinates\n");
    scanf("%lf%lf",&x1,&x2);
    for(int i=1;i<n;i++){
        printf("Enter co-ordinates\n");
        scanf("%lf%lf",&y1,&y2);
        sum += sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y2));
        x1 = y1;
        x2 = y2;
    }
    
    printf("Distance between first and last point : %lf\n",sum);
}