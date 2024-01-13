//Operator precedence
#include<stdio.h>
int main(){
    //High precedence comes first(*,/,%) then (+,-) and then (=)...........(5x2)-(2x3)=4
    int a = 5 * 2 - 2 * 3;
    //Assosiative Precedence comes here from left to right when same operators are there.....(((5x2)/2)*3)=15
    int b = 5 * 2 / 2 * 3;

    printf("Value of a is %d \n",a);
    printf("Value of b is %d \n",b);

    return 0;
}
 