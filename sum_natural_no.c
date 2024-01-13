//Sum of First 10 Natural numbers
/*#include<stdio.h>
int main(){
    int n,result;

    printf("Enter any Natural Number \n");
    scanf("%d",&n);

    result=(n*(n+1))/2;
    printf("The Sum of First %d Numbers is %d \n",n,result);
    return 0;
}*/
//with for loop 
#include<stdio.h>
int main(){
    int n;

    printf("Enter any Natural Number \n");
    scanf("%d",&n);

    int result=0;
    for(int i=1; i<=n; i++) {
    result=result+i; // sum += 1
    }

    printf("The Sum of First %d Numbers is %d \n",n,result);
    return 0;
}