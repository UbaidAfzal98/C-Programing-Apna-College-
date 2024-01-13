//Print the multiplication table taking input from user 
#include<stdio.h>
int main(){
    int n;

    printf("Enter the number of which you want a multiplication table \n");
    scanf("%d",&n);
    printf(".*********************The Multiplication  Table   0f %d  is Given Below *************************\n\n",n);

    for(int i=1;i<=10;i++) { //  fir revrese mul table(i=10;i>=1;i--)
       int mul=n*i;
           printf("%d X %d = %d\n",n,i,mul);
    }
    return 0;
}