#include<stdio.h>
int main(){
    char upper_case;

    printf("Enter any character \n ");
    scanf("%c",&upper_case);

    if(upper_case >= 'A' && upper_case <= 'Z') {
        printf("The first alphabet is uppercase \n");
    } else if(upper_case >= 'a' && upper_case <= 'z') {
        printf("The first alphabet is not uppercase \n");
    } else {
        printf("The first alphabet is not English alphabet \n");
    }
    return 0;

}