#include<stdio.h>
int main(){
    int row,col;
    
    printf("Enter the value rows \n");
    scanf("%d",&row);
    printf("Enter the value of columns \n");
    scanf("%d",&col);

    for(int i = 1; i <= row; i++){

    for (int j = 1; j <= col; j++){

    printf("*");
    }
    printf("\n");
    }

    
}