/*Write a C program to accept a coordinate point in an XY coordinate system and 
determine in which quadrant the coordinate point lies.*/
#include<stdio.h>
int main(){
    int x,y;

    printf("Enter the value of numbers X , Y respectively \n");
    scanf("%d %d",&x,&y);

    if(x >= 0 && y>=0) {
        printf("The %d , %d Lies in Ist quadrent \n",x,y);
    } else if(x>=0 && y<=0) {
        printf("The %d ,%d Lies is second quadrent \n",x,y);
    } else if( x<=0 && y<=0) {
        printf("The %d ,%d Lies in Third quadrent \n",x,y);
    } else if (x<=0 && y>=0) {
        printf("The %d , %d lies in the fourth quadrent \n",x,y);
    } else {
        printf("Not valid Numbers \n");
    }
    return 0;
}