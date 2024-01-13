// ********Checking the Factorial of a number using Recuresion********
// #include<stdio.h>
//  int fac(int n);
 
//  int main(){
//     int n;
//     printf("Entre the Number of which you want the factorial \n");
//     scanf("%d",&n);
   
//     printf("The factorial of %d is %d \n",n,fac(n));

//     return 0;
    
//  }
//  int fac(int n){                 
//     if(n == 0 || n == 1){    // Base Condition 
//         return 1;            // Factorial of 0 and 1 is  equal to 1 so that is why it will return 1;
//     } else {
//         return n * fac(n-1); // This is the actual logic for factorial
//     }
// }

//*******write a functions to print a fibonachi series of a number **************
// #include<stdio.h>
//  int fib(int n);
 
//  int main(){
//     int n;
//     printf("Entre the Number of which you want the fibonachi series  \n");
//     scanf("%d",&n);
   
//     printf("The Fibonnachi series  of %d is  \n",n);
//      for(int i = 0; i <=n ;i ++){
//             printf("%d \n",fib(i)); // To print the fibonachi series 
//         }
    
//     return 0;
    
//  }

//  int fib(int n){ 
    
//     if(n == 0 ){    // Base Condition 
//         return 0;   // starting from zero that is why returning zero 
//     } 
//     if (n == 1) {
//         return 1;  // after zero it is one
//     }
//         else {
//         return  fib(n-1) + fib(n-2); // This is the actual logic.
//     }

    
// }


// ***********Program to find the LCM and HCF of two Numbers using recursion*********
// #include<stdio.h>
//  long dimag(int n, int m);
 
//  int main(){
//     int n,m;
//     long hcf,lcm;
//     printf("Enter the value of numbers  i will tell you the HCF and LCM of numbers \n");
//     scanf("%d %d",&n,&m);

//     hcf=dimag(n,m);
//     lcm=(n*m/hcf);

//     printf("The HCF of %d, %d is %ld \n",n,m,hcf);
//     printf("The LCM of %d, %d is %ld \n",n,m,lcm);
    
//     return 0;
    
//  }

//  long dimag(int n,int m){
//     if( m == 0) {
//         return n;
//     }
//         else {
//             return dimag(m,n % m);
//         }
//     }
