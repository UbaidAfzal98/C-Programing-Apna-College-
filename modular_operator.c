//Checking wheather a number is divisile or not usind moduloar operator
#include<stdio.h>
int main(){
    int num;

    printf("Enter any number \n");
    scanf("%d",&num);
    
    printf("........The Number is divisible if 1  comes  if 0 comes below then not Divisible .........\n");
    printf(".......%d.........",num % 2 == 0);
    return 0;
}