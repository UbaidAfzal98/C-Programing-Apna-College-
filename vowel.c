// Write a C program to check whether an alphabet is a vowel or a consonant.

#include<stdio.h>
int main (){
    char ch;

    printf("Enter the any english alphabet \n");
    scanf("%c",&ch);

    if(ch=='A'|| ch == 'a' || ch == 'E' || ch == 'e' || ch == 'I' || ch == 'i' || ch == 'O' || ch == 'o' || ch == 'U' || ch == 'u') {
    printf("The Albhabet is Vowel \n");
    } else if ((ch >='a' && ch <='z') || (ch >='A' && ch <='Z')){
        printf("The Albhabet is a consonant \n");
    } else {
        printf("The Character you entered is not an aplhabet \n");
    }
    return 0;
}