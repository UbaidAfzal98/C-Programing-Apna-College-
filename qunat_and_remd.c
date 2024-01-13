//Quotient and Reminder of any Number Taking from User 
#include<stdio.h>
int main(){
    int div,divd;

    printf("Enter divident and Divisor of any Number you want Number Respectively  \n");
    scanf("%d %d",&divd,&div);

    int qoutient = divd / div;

    printf("The quotient of Number %d is %d when divided by %d \n\n",divd,qoutient,div);

    int reminder = divd % div;
    printf("The Reminder of Number %d is %d when divided by %d \n\n",divd,reminder,div);
    return 0;
}