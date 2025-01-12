// Given a point (x, y), write a program to find out if it lies on X-axis, Yaxis or origin.
#include<stdio.h>
int main(){
    int x,y;
    printf("Enter the X and Y co-ordinates \n");
    scanf("%d%d",&x,&y);
    if(y == 0 && x != 0){
        printf("Point is on the X-axis\n");
    }else if(x == 0 && y != 0){
        printf("Point is on the Y-axis\n");
    }else if(x == 0 && y == 0){
        printf("Point is on the origin\n");
    }else{
        printf("Point is in the 2D-Plane\n");
    }
}