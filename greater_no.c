//Write a C program to find the largest of three numbers
#include<stdio.h>
int main(){
    int a,b,c;

    printf("Enter any three numbers \n");
    scanf("%d %d %d",&a,&b,&c);

    if(a>b  && a>c) {
    printf("The %d is Bigger Number \n",a);
    } else if(b>a && b>c) {
        printf("The %d is Bigger Number \n",b);
    } else if(c>a && c>b) {
        printf("The %d number is bigger \n",c);
    } else {
        printf("Dont know the solution \n");
    }
    return 0;

}