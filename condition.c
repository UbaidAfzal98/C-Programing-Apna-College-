// write a program to check if a student is passed or failed.
#include<stdio.h>
int main(){
    int marks;

    printf("Enter the student marks  between 0-100  \n");
    scanf("%d",&marks);
     
    // Conditional operator
    // if(marks>30 && marks<=74) {
    //     printf("The is student is pass \n");
    // } else if(marks>=75 && marks<=100) {
    //     printf("The studnet is passed with distinction \n");
    // } else if(marks>=0 && marks<=30) {
    //     printf("The student is Fail \n");
    // } else {
    //     printf("You Entred wrong marks \n");
    // }
    // same problem with the help of Ternary operator.
    marks <= 30 ? printf("The student is fail \n") : printf("The student is pass \n");
    return 0;
}