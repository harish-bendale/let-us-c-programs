// Given three points (x1, y1), (x2, y2) and (x3, y3), write a program to 
// check if the three points fall on one straight line.
#include<stdio.h>
int main(){
    int x1,y1;
    int x2,y2;
    int x3,y3;
    printf("Enter x and y co-ordinates of point 1\n");
    scanf("%d%d",&x1,&y1);
    printf("Enter x and y co-ordinates of point 2\n");
    scanf("%d%d",&x2,&y2);
    printf("Enter x and y co-ordinates of point 3\n");
    scanf("%d%d",&x3,&y3);

    int slope1 = (y2-y1)*(x3-x2);
    int slope2 = (y3-y2)*(x2-x1);
    if(slope1 == slope2){
        printf("Three points are on the same line\n");
    }else{
        printf("Three points are not on the same line\n");
    }
}